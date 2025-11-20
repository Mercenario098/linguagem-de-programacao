#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float a = 0, b = 0, resultado = 0;
    int opcao;
    int sair = 0;

    do {
        printf("\n\t\t>>>> Calculadora <<<<\n");
        printf("\n\t1 - Soma");
        printf("\n\t2 - Subtração");
        printf("\n\t3 - Multiplicação");
        printf("\n\t4 - Divisão");
        printf("\n\t5 - Sair");
        printf("\n\n\t>>>> ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nValor 1: ");
            scanf("%f", &a);
            printf("Valor 2: ");
            scanf("%f", &b);
        }

        switch (opcao) {
            case 1:
                resultado = a + b;
                printf("\nResultado da soma: %.2f\n", resultado);
                break;
            case 2:
                resultado = a - b;
                printf("\nResultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                resultado = a * b;
                printf("\nResultado da multiplicação: %.2f\n", resultado);
                break;
            case 4:
                if (b != 0)
                    resultado = a / b;
                else {
                    printf("\nErro: divisão por zero!\n");
                    break;
                }
                printf("\nResultado da divisão: %.2f\n", resultado);
                break;
            case 5:
                sair = 1;
                printf("\nSaindo da calculadora...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }

    } while (!sair);

    return 0;
}
