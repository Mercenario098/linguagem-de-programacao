#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome_mes[20];
    int temperatura;
}Ano;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int size = 12;
    float soma = 0.0, media = 0.0;
    int temp_alta = 0, temp_baixa = 0;
    Ano *meses;

    meses = malloc(size * sizeof(Ano));
    meses == NULL;


    for(int i = 0; i < size; i++){
        printf("\n\t\tMês %d!\n", i+1);
        printf("Nome: ");
        scanf("%s", meses[i].nome_mes);

        printf("Temperatura: ");
        scanf("%i", &meses[i].temperatura);
    }

    for(int i = 0; i < size; i++){
        soma += meses[i].temperatura;
    }

    media = soma / size;

    for(int i = 0; i < size; i++){
            if(meses[i].temperatura > meses[temp_alta].temperatura){
                    temp_alta = i;
            }
            if(meses[i].temperatura < meses[temp_baixa].temperatura){
                    temp_baixa = i;

            }

    }
    printf("\nA média anual de temperatura: %.2f", media);
    printf("\nExibir o nome do mês que teve a média mensal mais quente: %s", meses[temp_alta].nome_mes);
    printf("\nExibir o nome do mês que teve a média mensal mais fria: %s", meses[temp_baixa].nome_mes);


    free (meses);

    return 0;
}
