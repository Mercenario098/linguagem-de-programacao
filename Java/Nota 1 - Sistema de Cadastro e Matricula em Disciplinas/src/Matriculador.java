import java.util.ArrayList;
import java.util.List;

public class Matriculador {
    Disciplina disciplina;

    private List<Disciplina> ofertas = new ArrayList<>(Disciplina);
    private List<Aluno> alunos = new ArrayList<>(Aluno);

    public Matriculador(){
        ofertas =
    }
    void cadastrarDisciplina(Disciplina d) { //não deve aceitar valores null nem códigos duplicados;

    }

    void cadastrarAluno(Aluno a) { //gera automaticamente a matrícula antes de cadastrar o aluno;

    }

    boolean matricular(int matricula, String codigoDisciplina) { //realiza a matrícula e retorna true se for bem-sucedida ou false caso não haja vaga ou o aluno já esteja inscrito

    }

    List<Aluno> listarInscritos(String codigoDisciplina) { //retorna uma cópia defensiva da lista de alunos;

    }

    Aluno buscarAluno(int matricula) { //busca um aluno com base no número de matrícula.

    }
}
