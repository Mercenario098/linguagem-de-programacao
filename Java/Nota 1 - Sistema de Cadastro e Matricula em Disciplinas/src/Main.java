import java.util.List;
void main() {
    int opcao = 0;

    do{
        IO.println("\t\t\tSistema de Cadastro\n");
        IO.println("1 - Realizar Matrícula");
        IO.println("2 - Listar Alunos");
        IO.println("3 - Listar Alunos por Disciplina");
        IO.println("4 - Sair");
        opcao = Integer.parseInt(IO.readln("Opção> "));

        switch (opcao){
            case 1 :

                break;

            case 2 :

                break;
            case 3 :

                break;
            case 4 :

                break;
            case 5 :

                break;
            default:
                IO.println("Opção invalida!");
        }

    }
    while (opcao == 4);
}