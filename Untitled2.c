#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um frete
typedef struct {
    char placa[10];
    float distancia;   // em km
    float carga;       // em toneladas
} Frete;

int main() {
    int n, i, idxMaiorCarga = 0;
    float somaDistancias = 0;

    printf("Informe a quantidade de fretes do dia: ");
    scanf("%d", &n);
    getchar(); // limpar buffer do teclado

    // Alocação dinâmica para vetor de fretes
    Frete *fretes = (Frete*) malloc(n * sizeof(Frete));
    if (fretes == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // Leitura dos fretes
    for (i = 0; i < n; i++) {
        printf("\n=== Frete %d ===\n", i + 1);

        printf("Placa do caminhao: ");
        fgets(fretes[i].placa, sizeof(fretes[i].placa), stdin);
        fretes[i].placa[strcspn(fretes[i].placa, "\n")] = '\0'; // remover \n

        printf("Distancia percorrida (km): ");
        scanf("%f", &fretes[i].distancia);

        printf("Carga transportada (toneladas): ");
        scanf("%f", &fretes[i].carga);

        getchar(); // limpar buffer

        // Acumulando soma das distâncias
        somaDistancias += fretes[i].distancia;

        // Verifica se é a maior carga
        if (fretes[i].carga > fretes[idxMaiorCarga].carga) {
            idxMaiorCarga = i;
        }
    }

    // Resultados
    printf("\n=== RESULTADOS ===\n");
    printf("Soma total das distancias percorridas: %.2f km\n", somaDistancias);
    printf("Frete com maior carga:\n");
    printf("Placa: %s | Distancia: %.2f km | Carga: %.2f t\n",
           fretes[idxMaiorCarga].placa,
           fretes[idxMaiorCarga].distancia,
           fretes[idxMaiorCarga].carga);

    // Liberação da memória
    free(fretes);

    return 0;
}

