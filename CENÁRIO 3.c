#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{     // Estrutura para representar um frete
    char placa[20];
    float distancia;
    float peso;

}Caminhao;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int size = 0, maior_Peso = 0.0;
    float soma = 0.0;

    printf("Qual a quantidade de frete a ser cadastrado: ");
    scanf("%d", &size);

    Caminhao *transporte;   // Alocação dinâmica para vetor de fretes
    transporte = malloc(size * sizeof(Caminhao));
    transporte == NULL;

    for(int i = 0; i < size; i++){      // Leitura dos fretes
        printf("\n\t\t%dº Frete!", i + 1);
        printf("\nQual a placa: ");
        scanf("%s", transporte[i].placa);
        printf("Qual a distacia da em km: ");
        scanf("%f", &transporte[i].distancia);
        printf("Qual o peso em tonelada: ");
        scanf("%f", &transporte[i].peso);
    }

    for(int i = 0; i < size; i++){      //Soma das distâncias
        soma += transporte[i].distancia;
    }

    for(int i = 0; i < size; i++){  // Verifica se é a maior carga
        if(transporte[i].peso > transporte[maior_Peso].peso){
            maior_Peso = i;
        }
    }

    printf("\n\n");

    if(size == 1){
        printf("O total percorrido por %d caminhão é de %.2f Km", size, soma);
    }
    else{
        printf("O total percorrido pelos %d caminhões é de %.2f Km", size, soma);
    }

    printf("\nO frete com maior carga é:\n\tPlaca: %s \n\tDistancia: %.2f Km\n\tPeso: %.2f Toneladas", transporte[maior_Peso].placa, transporte[maior_Peso].distancia, transporte[maior_Peso].peso);

    free(transporte);
    return 0;
}
