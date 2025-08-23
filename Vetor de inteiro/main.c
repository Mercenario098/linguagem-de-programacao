#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*Desafio 1: Ordenar um vetor de inteiro.
1 Passo: popular vetor com numeros aleatorios
2 Passo: ordenar*/

int main(){
    int size = 10;
    int test = 0;
    int aleatorio[size];
    srand(time(NULL));

    for(int i = 0; i < size; i++){
        aleatorio[i] = rand() %100;
        printf("%d\t", aleatorio[i]);
    }
    printf("\n\n");


    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(aleatorio[j] > aleatorio[j + 1]){
                test = aleatorio[j];
                aleatorio[j] = aleatorio[j + 1];
                aleatorio[j + 1] = test;
            }
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d\t", aleatorio[i]);
    }
    return 0;
}

/*Desafio 3: Recebe um numero de 4 digitos e faz a soma deles. Exemplo:

5023 -> 10*/
