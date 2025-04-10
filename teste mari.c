#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");


    int opcao = 0, sair = 0;
    float a = 0, b = 0, result = 0;

    do{
        printf("\nCalculadora!");

        printf("\nDigite o 1° Numero: ");
        scanf("%f", &a);
        printf("\nDigite o 2° Numero: ");
        scanf("%f", &b);

        printf("\n1-Somar!");
        printf("\t2-Dividir!");
        printf("\t3-Multiplicar!");
        printf("\t4-Subtrair!");
        printf("\t5-Sair");
        printf("\nQual opção: ");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            result = a + b;
            printf("\nO resultado é: %.3f", result);
            break;
        case 2:
            result = a / b;
            printf("\nO resultado é: %.3f", result);
            break;
        case 3:
            result = a * b;
            printf("\nO resultado é: %.3f", result);
            break;
        case 4:
            result = a - b;
            printf("\nO resultado é: %.3f", result);
            break;
        case 5:
            sair = 1;
            break;
        default:
            printf("\nOpção Inválida!\n");
            break;
        }

        }while(!sair);


    return 0;
}
