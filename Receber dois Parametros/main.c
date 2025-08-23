#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Receber dois parametros, uma linha e uma coluna. Criar uma matriz com numeros aleatorios.
Imprimir essa matriz. Fazer a transposta e imprimir essa nova matriz.*/

int main(){
    int linha = 0, coluna = 0;

    srand(time(NULL));

    printf("Qual o numero de Linhas: ");
    scanf("%d", &linha);
    printf("\n");
    printf("Qual o numero de Colunas: ");
    scanf("%d", &coluna);

    int matriz[linha][coluna];
    int transposta[coluna][linha];

    printf("\n\n\n");

    printf("Matriz Original");
    printf("\n");

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            matriz[i][j] = rand() %100;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz Transposta");
    printf("\n");

    for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){

            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
