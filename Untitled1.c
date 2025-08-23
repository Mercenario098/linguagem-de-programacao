
<<<<<<< HEAD
=======
#define TAM 4

typedef struct {
    int id;
    char nome[20];
    int quantidade;
    float valor;
} Produto;

typedef struct {
    char cpf[12];
    char nome[20];
} Cliente;

typedef struct {
    char cpfCliente[12];
    int idProduto;
    int quantProduto;
    float valorTotal;
} Venda;

int validarCPF(const char *cpf) {
    if (strlen(cpf) != 11) return 0;
    for (int i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) return 0;
    }
    return 1;
}

int cpfJaCadastrado(Cliente c[], int total, char cpf[]) {
    for (int i = 0; i < total; i++) {
        if (strcmp(c[i].cpf, cpf) == 0) {
            printf("\nCPF j� cadastrado para o cliente: %s\n", c[i].nome);
            return 1;
        }
    }
    return 0;
}

void cadastrarCliente(Cliente c[], int *totalClientes) {
    for (int i = *totalClientes; i < TAM; i++) {
        printf("\nCliente %d, Primeiro Nome: ", i + 1);
        scanf("%s", c[i].nome);

        do {
            printf("CPF: ");
            scanf("%s", c[i].cpf);

            if (!validarCPF(c[i].cpf)) {
                printf("CPF inv�lido!\n\n");
            } else if (cpfJaCadastrado(c, *totalClientes, c[i].cpf)) {
                printf("Digite outro CPF.\n");
                strcpy(c[i].cpf, ""); // Limpa para refazer
            }
        } while (!validarCPF(c[i].cpf) || cpfJaCadastrado(c, *totalClientes, c[i].cpf));

        (*totalClientes)++;
    }
}

void cadastrarProduto(Produto p[], int *totalProdutos) {
    for (int i = *totalProdutos; i < TAM; i++) {
        printf("\nPrimeiro Nome do Produto %d: ", i + 1);
        scanf("%s", p[i].nome);

        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);

        printf("Valor: ");
        scanf("%f", &p[i].valor);

        p[i].id = i + 1;
        (*totalProdutos)++;
    }
}

int realizarVendas(Venda v[], int vendasFeitas, Cliente clientes[], int totalClientes, Produto produtos[], int totalProdutos) {
    if (vendasFeitas >= TAM) {
        printf("\nLimite de vendas atingido.\n");
        return vendasFeitas;
    }

    printf("\nVenda %d", vendasFeitas + 1);
    printf("\nCPF do Cliente: ");
    scanf("%s", v[vendasFeitas].cpfCliente);

    int clienteEncontrado = 0;
    for (int i = 0; i < totalClientes; i++) {
        if (strcmp(clientes[i].cpf, v[vendasFeitas].cpfCliente) == 0) {
            clienteEncontrado = 1;
            break;
        }
    }

    if (!clienteEncontrado) {
        printf("Cliente n�o encontrado!\n");
        return vendasFeitas;
    }

    printf("ID do Produto: ");
    scanf("%d", &v[vendasFeitas].idProduto);

    int idProduto = v[vendasFeitas].idProduto;
    if (idProduto < 1 || idProduto > totalProdutos) {
        printf("Produto inv�lido!\n");
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

void consultarVendas(Venda v[], int vendasFeitas) {
    if (vendasFeitas == 0) {
        printf("\nNenhuma venda realizada ainda.\n");
        return;
    }

    for (int i = 0; i < vendasFeitas; i++) {
        printf("\nVenda %d", i + 1);
        printf("\nCPF do Cliente: %s", v[i].cpfCliente);
        printf("\nID do Produto: %d", v[i].idProduto);
        printf("\nQuantidade Vendida: %d", v[i].quantProduto);
        printf("\nValor Total: %.2f", v[i].valorTotal);
        printf("\n-----------------------------------\n");
    }
}

void consultarCliente(Cliente c[], int totalClientes) {
    for (int i = 0; i < totalClientes; i++) {
        printf("\nPrimeiro Nome: %s", c[i].nome);
        printf("\nCPF Cliente: %s\n", c[i].cpf);
    }
    printf("\n");
}

void consultarProduto(Produto p[], int totalProdutos) {
    for (int i = 0; i < totalProdutos; i++) {
        printf("\nId Produto: %d", p[i].id);
        printf("\nNome Produto: %s", p[i].nome);
        printf("\nQuantidade: %d", p[i].quantidade);
        printf("\nValor: %.2f", p[i].valor);
        printf("\n----------------------------------");
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, sair = 0;
    Cliente clientes[TAM];
    Produto produtos[TAM];
    Venda vendas[TAM];
    int totalClientes = 0, totalProdutos = 0, vendasFeitas = 0;

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
                cadastrarCliente(clientes, &totalClientes);
                break;
            case 2:
                cadastrarProduto(produtos, &totalProdutos);
                break;
            case 3:
                consultarCliente(clientes, totalClientes);
                break;
            case 4:
                consultarProduto(produtos, totalProdutos);
                break;
            case 5:
                vendasFeitas = realizarVendas(vendas, vendasFeitas, clientes, totalClientes, produtos, totalProdutos);
                break;
            case 6:
                consultarVendas(vendas, vendasFeitas);
                break;
            case 7:
                sair = 1;
                break;
            default:
                printf("\n\nOp��o Inv�lida!");
        }
    } while (!sair);

    return 0;
}
>>>>>>> 9b6146b6e88c404f949d8d444d52d3c7b3d4bcbc
