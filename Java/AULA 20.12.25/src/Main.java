// Classe -> modelo para criação de POO
import java.util.Scanner;

void main() {
    int option = 0;
    Scanner leia = new Scanner(System.in);
    GerenciadorDeVendas gerenciador = new GerenciadorDeVendas();

    do {
        IO.println("\t1 - Cadastrar Cliente");
        IO.println("\t2 - Cadastrar Produto");
        IO.println("\t3 - Listar Cliente");
        IO.println("\t4 - Listar Produto");
        IO.println("\t5 - Sair");

        option = leia.nextInt();

        switch (option) {
            case 1:
                int idCliente = Integer.parseInt(IO.readln("ID do Cliente: "));
                String nomeCliente = IO.readln("Nome do Cliente: ");
                String email = IO.readln("Email do Cliente: ");
                IO.println("\n\n");

                Cliente cliente = new Cliente(idCliente, nomeCliente, email);
                gerenciador.CadastrarClientes(cliente);
                break;

            case 2:
                int idProduto = Integer.parseInt(IO.readln("ID do Produto: "));
                String nomeProduto = IO.readln("Nome do Produto: ");
                int quantidade =  Integer.parseInt(IO.readln("Quantidade do Produto: "));
                double preco = Double.parseDouble(IO.readln("Preco do Produto: "));
                IO.println("\n\n");

                Produto produto = new Produto(nomeProduto, quantidade, preco, idProduto);
                gerenciador.CadastrarProdutos(produto);
                break;

            case 3:
                gerenciador.ListarClientes();
                break;

            case 4:
                gerenciador.ListarProdutos();
                break;

            case 5:
                System.exit(5);
                break;

            default:
                 IO.println("Opição Invalida!");
        }
    }while (option != 5);
}
