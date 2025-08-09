#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float operacoesbasicas(){
    float a = 0, b = 0, resultado = 0;

    if( resultado = 1){

    }

}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float a = 0, b = 0, resultado = 0;
    int opcao, sair = 0;


    do {
        printf("\n\t>>>>Calculadora<<<<");
        printf("\n\t1 - Soma");
        printf("\n\t2 - Subtração");
        printf("\n\t3 - Multiplicação");
        printf("\n\t4 - Divisão");
        printf("\n\t5 - Sair");
        printf("\n\t>>>> ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Valor 1: ");
                scanf("%d", &a);
                printf("\nValor 2: ");
                scanf("%d", &b);

                resultado = a + b;
                printf("\nA soma é: %f", resultado);

                printf("\n\n");
                break;
            case 2:
                printf("Valor 1: ");
                scanf("%d", &a);
                printf("\nValor 2: ");
                scanf("%d", &b);

                resultado = a - b;
                printf("\nA soma é: %f", resultado);

                printf("\n\n");
                break;

            case 3:
                printf("Valor 1: ");
                scanf("%d", &a);
                printf("\nValor 2: ");
                scanf("%d", &b);

                resultado = a * b;
                printf("\nA soma é: %f", resultado);

                printf("\n\n");
                break;

            case 4:
                printf("Valor 1: ");
                scanf("%d", &a);
                printf("\nValor 2: ");
                scanf("%d", &b);

                resultado = a / b;
                printf("\nA soma é: %f", resultado);

                printf("\n\n");
                break;

            case 5:
                sair = 1;
                break;

            default:
                printf("Opção Invalida!");
            }

        }while(!sair);


    return 0;
}
