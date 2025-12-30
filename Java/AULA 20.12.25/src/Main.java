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
                int id = Integer.parseInt(IO.readln("ID do Cliente: "));
                String nome = IO.readln("Nome do Cliente: ");
                String email = IO.readln("Email do Cliente: ");
                Cliente cliente = new Cliente(id, nome, email);
                break;

            case 2:
                id = Integer.parseInt(IO.readln("ID do Produto: "));
                nome = IO.readln("Nome do Produto: ");
                int quantidade =  Integer.parseInt(IO.readln("Quantidade do Produto: "));
                double preco = Double.parseDouble(IO.readln("Preco do Produto: "));
                Produto produto = new Produto(nome, quantidade, preco, id);
                break;

            case 3:
                
                break;

            case 4:

                break;

            case 5:
                System.exit(5);
                break;

            default:
                 IO.println("Opição Invalida!");
        }
    }while (option != 5);
}
