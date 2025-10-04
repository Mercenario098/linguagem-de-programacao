#include <stdlib.h>
#include <stdio.h>

int main() {
    int vetor[20];
    int somaPositivos = 0;
    int qtdNegativos = 0;
    int qtdImpares = 0;
    int valor = 0;

    printf("Digite 20 valores inteiros entre -100 e 100:\n");

    for (int i = 0; i < 20; i++) {

        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &valor);

            if (valor < -100 || valor > 100) {
                printf("Valor inv�lido! Digite um n�mero entre -100 e 100.\n");
            }
        } while (valor < -100 || valor > 100);

        vetor[i] = valor;

        if (valor > 0) {
            somaPositivos += valor;
        }

        if (valor < 0) {
            qtdNegativos++;
        }

        if (valor % 2 != 0) {
            qtdImpares++;
        }
    }

    printf("\n--- Resultados ---\n");
    printf("Soma dos n�meros positivos: %d\n", somaPositivos);
    printf("Quantidade de n�meros negativos: %d\n", qtdNegativos);
    printf("Quantidade de n�meros �mpares: %d\n", qtdImpares);

    return 0;
}
