import java.util.ArrayList;

public class GerenciadorDeVendas {
    private ArrayList<Cliente> clientes = new ArrayList<>();
    private ArrayList<Produto> produtos = new ArrayList<>();

    /*** Clientes */

    public void CadastrarClientes( Cliente cliente) {
        clientes.add(cliente);
    }

    public void ListarClientes() {
        if (!clientes.isEmpty()){
            for (Cliente cliente : clientes) {
                IO.println(cliente.toString());
            }
        }
        else  {
            IO.println("Nenhum Cliente encontrado!\n\n");
        }
    }
    /*** Produtos */

    public void CadastrarProdutos(Produto produto) {
        produtos.add(produto);
        IO.println("Cadastrado com sucesso!");
    }

    public void ListarProdutos() {
        if (!produtos.isEmpty()){
            for (Produto produto : produtos) {
                IO.println(produto.toString());
            }
        }
        else  {
            IO.println("Nenhum produto encontrado!\n\n");
        }
    }

}
