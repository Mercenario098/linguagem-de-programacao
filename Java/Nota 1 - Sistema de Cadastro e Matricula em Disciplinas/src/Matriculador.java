import java.util.ArrayList;
import java.util.List;

public class Matriculador {

    private List<Disciplina> ofertas;
    private List<Aluno> alunos;
    private int matriculaAutomatica = 00001;

    public void cadastrarDisciplina(Disciplina d) { //não deve aceitar valores null nem códigos duplicados;
        if (d == null){
            return;
        }
        for (int i = 0; i < ofertas.size(); i++) {
            Disciplina x = ofertas.get(i);
            if (x.getCodigo().equals(d.getCodigo())) {
                IO.println("Código de Disciplina Duplicado!");
                return;
            }
        }
        ofertas.add(d);
    }

    void cadastrarAluno(Aluno a) { //gera automaticamente a matrícula antes de cadastrar o aluno;
       if (a == null) {
         return;
       }

       a.setMatricula(matriculaAutomatica++);
       alunos.add(a);
    }

    boolean matricular(int matricula, String codigoDisciplina) { //realiza a matrícula e retorna true se for bem-sucedida ou false caso não haja vaga ou o aluno já esteja inscrito

    }

    List<Aluno> listarInscritos(String codigoDisciplina) { //retorna uma cópia defensiva da lista de alunos;

    }

    Aluno buscarAluno(int matricula) { //busca um aluno com base no número de matrícula.

    }
}
