#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#define TAM 4

typedef struct {

    int id;
    char nome[20];
    int quantidade;
    float valor;
}Produto;

typedef struct {

    char cpf[12];
    char nome[20];
}Cliente;

typedef struct {

    char cpfCliente;
    int idProduto;
    int quantProduto;
    float valorTotal;
}Venda;

int validarCPF(const char *cpf) {

    if (strlen(cpf) != 11) {
        return 0;
    }

    for (int i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            return 0;
        }
    }

    return 1;
}

int cpfJaCadastrado(Cliente c[], int total, char cpf[]) {
    for (int i = 0; i < total; i++) {
        if (strcmp(c[i].cpf, cpf) == 0) {
            printf("\nCPF já cadastrado para o cliente: %s\n", c[i].nome);
            return 1;
        }
    }
    return 0;
}

void cadastrarCliente (Cliente c[]) {

    for(int i=0; i < TAM; i++) {

        printf("Cliente %d, Primeiro Nome: ", i+1);
        scanf("%s", c[i].nome );

        do {
            printf("CPF: ");
            scanf("%s", c[i].cpf);

            if (!validarCPF(c[i].cpf)) {
                printf("CPF inválido!\n\n");
            }
        } while (!validarCPF(c[i].cpf));
        printf("\n");

    }
}

int realizarVendas(Venda v[], int vendasFeitas, Cliente clientes[], Produto produtos[]) {
    if (vendasFeitas >= TAM) {
        printf("\nLimite de vendas atingido.\n");
        return vendasFeitas;
    }

    printf("\nVenda %d", vendasFeitas + 1);
    printf("\nCPF do Cliente: ");
    scanf("%s", v[vendasFeitas].cpfCliente);

    int clienteEncontrado = 0;
    for (int i = 0; i < TAM; i++) {
        if (strcmp(clientes[i].cpf, v[vendasFeitas].cpfCliente) == 0) {
            clienteEncontrado = 1;
            break;
        }
    }

    if (!clienteEncontrado) {
        printf("Cliente não encontrado!\n");
        return vendasFeitas;
    }

    printf("ID do Produto: ");
    scanf("%d", &v[vendasFeitas].idProduto);

    int idProduto = v[vendasFeitas].idProduto;
    if (idProduto < 1 || idProduto > TAM) {
        printf("Produto inválido!\n");
        return vendasFeitas;
    }

    printf("Quantidade vendida: ");
    scanf("%d", &v[vendasFeitas].quantProduto);

    int qtdVendida = v[vendasFeitas].quantProduto;
    if (qtdVendida > produtos[idProduto - 1].quantidade) {
        printf("Estoque insuficiente!\n");
        return vendasFeitas;
    }

    produtos[idProduto - 1].quantidade -= qtdVendida;
    v[vendasFeitas].valorTotal = produtos[idProduto - 1].valor * qtdVendida;

    printf("Venda realizada com sucesso!\n");

    return vendasFeitas + 1;
}


void consultarVendas(Venda v[]){
    int vendasfeita = 0;

    if (vendasfeita == 0) {
        printf("\nNenhuma venda realizada ainda.\n");
        return;
    }

    for (int i = 0; i < vendasfeita; i++) {
        printf("\nVenda %d", i + 1);
        printf("\nCPF do Cliente: %s", v[i].cpfCliente);
        printf("\nID do Produto: %d", v[i].idProduto);
        printf("\nQuantidade Vendida: %d", v[i].quantProduto);
        printf("\nValor Total: %.2f", v[i].valorTotal);
        printf("\n\n");
    }
}

void cadastrarProduto (Produto p[]) {

    for(int i=0; i < TAM; i++) {
        printf("\nPrimeiro Nome do Produto %d: ", i+1);
        scanf("%s", p[i].nome );

        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);

        printf("Valor: ");
        scanf("%f", &p[i].valor);

        p[i].id = i+1;
    }
}

void consultarCliente (Cliente *c) {

    for(int i=0; i < TAM; i++) {
        printf("\nPrimeiro Nome: %s.",  c[i].nome);
        printf("\nCPF Cliente: %d.",  c[i].cpf);
        printf("\n");
    }

    printf("\n\n");
}

void consultarProduto (Produto p[]) {

    for(int i=0; i < TAM; i++) {
        printf("\nId Produto: %d.",  p[i].id);
        printf("\nNome Produto: %s.", p[i].nome);
        printf("\nQuantidade: %d.", p[i].quantidade);
        printf("\nValor: %.2f.", p[i].valor);
        printf("\n----------------------------------");
    }

    printf("\n\n");
}



int main() {
    setlocale(LC_ALL, "portuguese_Brazil");

    int opcao, sair=0; // sair inicialmente falso
    Cliente clientes[TAM];
    Produto produtos[TAM];
    Venda vendas[TAM];

    do {
        printf("\n\t>>>> Sistema de Vendas <<<< ");
        printf("\n\t1 - Cadastrar Clientes");
        printf("\n\t2 - Cadastrar Produtos");
        printf("\n\t3 - Consultar Clientes");
        printf("\n\t4 - Consultar Produtos");
        printf("\n\t5 - Realizar Vendas");
        printf("\n\t6 - Consultar Vendas");
        printf("\n\t7 - Sair\n\t>>>> ");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                cadastrarCliente(&clientes);
                break;
            case 2:
                cadastrarProduto(&produtos);
                break;
            case 3:
                consultarCliente(&clientes);
                break;
            case 4:
                consultarProduto(&produtos);
                break;
            case 5:
                realizarVendas(&vendas);
                break;
            case 6:
                consultarVendas(&vendas);
                break;
            case 7:
                sair = 1;
                break;
            default:
                printf("\n\nOpcao Invalida!");

        }

    } while (!sair);

    return 0;
}
