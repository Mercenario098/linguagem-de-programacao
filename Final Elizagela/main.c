#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[5][3];
    int notasBaixas = 0;
    int reprovados = 0;
    int melhorAluno = 0;
    float maiorMedia = 0.0;
    float menorNotaProva3 = 10.0;
    float media = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Digite as 3 notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);

            if (notas[i][j] >= 0 && notas[i][j] <= 4) {
                notasBaixas++;
            }

            if (j == 2 && notas[i][j] < menorNotaProva3) {
                menorNotaProva3 = notas[i][j];
            }
        }

        media = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;

        if (media < 6.0) {
            reprovados++;
        }

        if (media > maiorMedia) {
            maiorMedia = media;
            melhorAluno = i;
        }
    }


    printf("\n--- Resultados ---\n");
    printf("Quantidade de notas entre 0 e 4: %d\n", notasBaixas);
    printf("Quantidade de alunos reprovados: %d\n", reprovados);
    printf("Notas do melhor aluno (Aluno %d): %.1f, %.1f, %.1f\n", melhorAluno + 1, notas[melhorAluno][0], notas[melhorAluno][1], notas[melhorAluno][2]);
    printf("Menor nota da prova 3: %.1f\n", menorNotaProva3);

    return 0;
}
