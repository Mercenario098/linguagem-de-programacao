#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char placa[20];
    float distancia;
    float peso;

}Caminhao;


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int size = 0;
    float soma = 0.0;

    printf("Qual a quantidade de frete a ser cadastrado: ");
    scanf("%d", &size);

    Caminhao *transporte;
    transporte = malloc(size * sizeof(Caminhao));
    transporte == NULL;

    for(int i = 0; i < size; i++){
        printf("\n\t\t%dº Frete!", i + 1);
        printf("\nQual a placa: ");
        scanf("%s", transporte[i].placa);
        printf("Qual a distacia da em km: ");
        scanf("%f", &transporte[i].distancia);
        printf("Qual o peso em tonelada: ");
        scanf("%f", &transporte[i].peso);


    }

    free(transporte);
    return 0;
}
