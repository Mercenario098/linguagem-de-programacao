import java.util.ArrayList;
import java.util.List;
import java.util.UUID;

public class Disciplina {
    private String codigo;
    private String titulo;
    private int capacidadeMaxima = 0;
    private List<Aluno> inscritos;

    public Disciplina(String codigo, String titulo, int capacidadeMaxima){
        this.codigo = codigo;
        this.titulo = titulo;
        this.capacidadeMaxima = capacidadeMaxima;
        this.inscritos = new ArrayList<>();
    }

    boolean isLotada() { //verifica se a disciplina atingiu sua capacidade máxima;
        return inscritos.size() >= capacidadeMaxima;
    }
    //List<Aluno> getAlunos() { //retorna todos os alunos inscritos;}

    public String getCodigo() {
        return codigo;
    }

    public String getTitulo() {
        return titulo;
    }

    public int getCapacidadeMaxima() {
        return capacidadeMaxima;
    }

    public List<Aluno> getInscritos() {
        return inscritos;
    }
}