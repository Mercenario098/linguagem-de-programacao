#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Leia 10 números inteiros e os armazene em um vetor.
Depois, mostre na tela apenas os números pares do vetor.
Use um laço for para ler e outro para percorrer e imprimir os pares.*/

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int size = 10;
    int valor[size];

    for(int i = 0; i <size; i++){
        printf("dite o %d° numero: ", i+1);
        scanf("%d", &valor[i]);
    }

    printf("\n");

    for(int i = 0; i <size; i++){
        if(valor[i] %2 == 0){
        printf("O valor %d° numero: %d\n", i+1, valor[i]);
        }
    }

   return 0;
}
