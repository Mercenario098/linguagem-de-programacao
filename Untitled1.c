#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#define TAM 5

typedef struct {
    int id;
    char nome[20];
    int quantidade;
    float valor;
} Produto;

typedef struct {
    char cpf[12]; // CPF agora como string
    char nome[20];
} Cliente;

typedef struct {
    int idCliente;
    int idProduto;
    int quantProduto;
    float valorTotal;
} Venda;

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

void cadastrarCliente(Cliente c[]) {
    for (int i = 0; i < TAM; i++) {
        printf("Cliente %d, Primeiro Nome: ", i + 1);
        scanf("%s", c[i].nome);

        do {
            printf("CPF (apenas números): ");
            scanf("%s", c[i].cpf);
            if (!validarCPF(c[i].cpf)) {
                printf("CPF inválido! Digite novamente.\n");
            }
        } while (!validarCPF(c[i].cpf));
    }
}

void cadastrarProduto(Produto p[]) {
    for (int i = 0; i < TAM; i++) {
        printf("\nNome do Produto %d: ", i + 1);
        scanf("%s", p[i].nome);

        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);

        printf("Valor: ");
        scanf("%f", &p[i].valor);

        p[i].id = i + 1;
    }
}

void consultarCliente(Cliente c[]) {
    for (int i = 0; i < TAM; i++) {
        printf("\nCPF Cliente: %s", c[i].cpf);
        printf("\nPrimeiro Nome: %s\n", c[i].nome);
    }
}

void consultarProduto(Produto p[]) {
    for (int i = 0; i < TAM; i++) {
        printf("\nId Produto: %d", p[i].id);
        printf("\nNome Produto: %s", p[i].nome);
        printf("\nQuantidade: %d", p[i].quantidade);
        printf("\nValor: %.2f", p[i].valor);
        printf("\n---------------------------\n");
    }
}

void realizarVendas(Venda v[], int *totalVendas) {
    if (*totalVendas >= TAM) {
        printf("Limite de vendas atingido!\n");
        return;
    }

    printf("\nVenda %d", *totalVendas + 1);
    printf("\nID Cliente: ");
    scanf("%d", &v[*totalVendas].idCliente);
    printf("ID Produto: ");
    scanf("%d", &v[*totalVendas].idProduto);
    printf("Quantidade Vendida: ");
    scanf("%d", &v[*totalVendas].quantProduto);
    printf("Valor Total: ");
    scanf("%f", &v[*totalVendas].valorTotal);

    (*totalVendas)++;
}

void consultarVendas(Venda v[], int totalVendas) {
    if (totalVendas == 0) {
        printf("\nNenhuma venda realizada ainda.\n");
        return;
    }

    for (int i = 0; i < totalVendas; i++) {
        printf("\nVenda %d", i + 1);
        printf("\nID Cliente: %d", v[i].idCliente);
        printf("\nID Produto: %d", v[i].idProduto);
        printf("\nQuantidade Vendida: %d", v[i].quantProduto);
        printf("\nValor Total: %.2f", v[i].valorTotal);
        printf("\n---------------------------\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, sair = 0;
    int totalVendas = 0;

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

        switch (opcao) {
            case 1:
                cadastrarCliente(clientes);
                break;
            case 2:
                cadastrarProduto(produtos);
                break;
            case 3:
                consultarCliente(clientes);
                break;
            case 4:
                consultarProduto(produtos);
                break;
            case 5:
                realizarVendas(vendas, &totalVendas);
                break;
            case 6:
                consultarVendas(vendas, totalVendas);
                break;
            case 7:
                sair = 1;
                break;
            default:
                printf("\nOpção inválida!\n");
        }

    } while (!sair);

    return 0;
}
