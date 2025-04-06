#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome[50];
    int idade;
    int cpf;
}Pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int size = 2;

    Pessoa p[size];

    for(int i = 0; i < size; i++){
        printf("\n%d° Pessosa!", i+1);
        printf("\nNome: ");
        scanf("%s", p[i].nome);
        printf("Idade: ");
        scanf("%d", &p[i].idade);
        printf("CPF: ");
        scanf("%d", &p[i].cpf);
    }

    for(int i = 0; i <size; i++){
        printf("\n%d° Pessosa!", i+1);
        printf("\nNome: %s", p[i].nome);
        printf("\nIdade: %d", p[i].idade);
        printf("\nCPF: %d", p[i].cpf);
        printf("\n");
    }

    return 0;
}
