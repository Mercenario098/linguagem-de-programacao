#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMCli 3
#define TAMProd 3



typedef struct {

    int id;
    char nome[20];
    int quantidade;
    float valor;
}Produto;


typedef struct {

    int id;
    char nome[20];
}Cliente;


typedef struct {

    int idCliente;
    int idProduto;
    int quantProduto;
    float valorTotal;
}Venda;


void cadastrarCliente (Cliente c[]) {

    for(int i=0; i < TAMCli; i++) {

        printf("Cliente %d, Primeiro Nome: ", i+1);
        scanf("%s", c[i].nome );

        c[i].id = i+1;
    }
}

void realizarVendas(Venda v[]){

    for(int i = 0; i < TAMCli; i++){
        printf("\nVenda %d", i + 1);
        printf("\nID Cliente: ");
        scanf("%i", &v[i].idCliente);
        printf("\nID Produto: ");
        scanf("%d", &v[i].idProduto);
        printf("\nQuantidade Vendida: ");
        scanf("%d", &v[i].quantProduto);
        printf("\nValor Total: ");
        scanf("%.2f", &v[i].valorTotal);
    }
}

void consultarVendas(Venda v[]){
    int vendasfeita;

    if (vendasfeita == 0) {
        printf("\nNenhuma venda realizada ainda.\n");
        return;
    }

    for (int i = 0; i < vendasfeita; i++) {
        printf("\nVenda %d", i + 1);
        printf("\nID Cliente: %d", v[i].idCliente);
        printf("\nID Produto: %d", v[i].idProduto);
        printf("\nQuantidade Vendida: %d", v[i].quantProduto);
        printf("\nValor Total: %.2f", v[i].valorTotal);
    }
}

void cadastrarProduto (Produto p[]) {

    for(int i=0; i < TAMProd; i++) {
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

    for(int i=0; i < TAMCli; i++) {
        printf("\nId Cliente: %d.",  c[i].id);
        printf("\nPrimeiro Nome: %s.",  c[i].nome);
    }

    printf("\n\n");
}

void consultarProduto (Produto p[]) {

    for(int i=0; i < TAMProd; i++) {
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
    Cliente clientes[5];
    Produto produtos[5];
    Venda vendas[5];

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
