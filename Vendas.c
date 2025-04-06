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

void realizarVenda(Venda v[]){

    for(int i = 0; i < TAMCli; i++){
        printf("\nProduto: ");
        scanf("%i", &v[i].idProduto);
        printf("Quantidade: ");
        scanf("%i", &v[i].quantProduto);

        v[i].quantProduto = (v[i].idProduto * v[i].quantProduto);
    }
}

void consultarVenda(Venda v[]){
    for(int i = 0; i < TAMCli; i++){
        printf("\nProduto: %i", v[i].idProduto);
        printf("Quantidade: %i", v[i].quantProduto);
        printf("Valor da Venda: %f", v[i].valorTotal);
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

    int opcao, sair=0; // sair inicialmente falso
    Cliente clientes[5];
    Produto produtos[5];
    Venda vendas[5];

    do {
        printf("\n\n>>>> Sistema de Vendas <<<< ");
        printf("\n\t1 - Cadastrar Clientes");
        printf("\n\t2 - Cadastrar Produtos");
        printf("\n\t3 - Consultar Clientes");
        printf("\n\t4 - Consultar Produtos");
        printf("\n\t5 - Realizar Vendas");
        printf("\n\t6 - Consultar Vendas");
        printf("\n\t7 - Sair\n\t>>>> ");

        scanf("%d", &opcao);

        if ( opcao == 1) {
            cadastrarCliente(&clientes);

        } else if ( opcao == 2 ) {
            cadastrarProduto(&produtos);

        } else if ( opcao == 3 ) {
            consultarCliente(&clientes);

        } else if ( opcao == 4 ) {
            consultarProduto(&produtos);

        } else if ( opcao == 5 ) {
            realizarVenda(&vendas);

        } else if ( opcao == 6 ) {
            consultarVenda(&vendas);

        } else if ( opcao == 7 ) {
            sair = 1;

        } else {
            printf("\n\nOpcao Invalida!");

        }

    } while ( sair != 1 );

    return 0;
}
