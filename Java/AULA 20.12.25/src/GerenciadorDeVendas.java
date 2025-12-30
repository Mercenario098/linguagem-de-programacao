import java.util.ArrayList;

public class GerenciadorDeVendas {
    private ArrayList<ArrayList<Ciente>> clientes = new ArrayList<ArrayList<Ciente>>();
    private ArrayList<Produto> produtos = new ArrayList<>();

    /*** Clientes */

    public void CadastrarClientes() {
        clientes.add(clientes);
    }

    public void ListarClientes() {
        if (!clientes.isEmpty()){
            for (ArrayList<Ciente> c : clientes) {
                IO.println(c.toString());
            }
        }
    }

    public void CadastrarProdutos() {
        produtos.add(produtos);
    }

    public void ListarProdutos() {
        if (!produtos.isEmpty()){
            for (Produto produto : produtos) {
                IO.println(produto.toString());
            }
        }
    }

}
