public class Produto {
    private int id;
    private String nome;
    private int quantidade;
    private double preco;

    public Produto(String nome, int quantidade, double preco, int id) {
        this.nome = nome;
        this.id = id;
        this.quantidade = quantidade;
        this.preco = preco;
            }

    public boolean reduzirEstoque(int quantidade) {
        if (this.quantidade <= quantidade) {
            this.quantidade -= quantidade;
            return true;
        }
        return false;
    }


    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }
    @Override
    public String toString() {
        return "(id "+ id +" )";
    }
}
