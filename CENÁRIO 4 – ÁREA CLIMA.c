#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maiorValor(int arr[], int n){ // Função auxiliar para obter o maior valor
    int maior = arr[0];

    for (int i = 1; i < n; i++){

        if (arr[i] > maior){
                maior = arr[i];
        }
    }

    return maior;
}

void countingSort(int arr[], int n, int exp){ // Função que realiza a contagem para um dígito específico (Counting Sort adaptado)
    int saida[n]; int count[10] = {0};

    for (int i = 0; i < n; i++){ // Contagem das ocorrências de cada dígito
        count[(arr[i] / exp) % 10]++;
    }

    // Atualiza count[i] para que ele contenha a posição final desse dígito
    for (int i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }

    // Monta o array de saída (de trás pra frente para estabilidade)
    for (int i = n - 1; i >= 0; i--){
        saida[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++){ // Copia de volta para o array original
        arr[i] = saida[i];
    }
}

void radixSort(int arr[], int n){ // Função principal do Radix Sort
    int maior = maiorValor(arr, n);

    for (int exp = 1; maior / exp > 0; exp *= 10){ // Aplica countingSort para cada dígito (exp = 1, 10, 100, ...)
        countingSort(arr, n, exp);
    }
}

int lerTemperatura(){ // Função para ler e validar uma temperatura inteira
    int temp;
    char entrada[51];
    int valido = 0;

    while (!valido){
        printf("Informe a temperatura (entre -100 e 100): ");

        if (fgets(entrada, sizeof(entrada), stdin)) {

            if (sscanf(entrada, "%d", &temp) == 1 && temp >= -100 && temp <= 100){
                valido = 1;
            }

            else {
                printf("\n\t\tValor inválido!\n");
                printf("\tDigite apenas numeros inteiros.\n\n");
            }
        }
    }

    return temp;
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int size = 30;
    int temperaturas[size];
    int negativos[size], positivos[size];
    int nNeg = 0, nPos = 0;

    printf("\t=== COLETA DE TEMPERATURAS (30 dias) ===\n\n");

    for (int i = 0; i < size; i++){
        printf("\t\t\tDia %d: \n", i + 1);
        temperaturas[i] = lerTemperatura();
    }

    // Como o Radix Sort padrão não ordena negativos corretamente,
    // vamos separar negativos e positivos
    for (int i = 0; i < size; i++){
        if (temperaturas[i] < 0){
            negativos[nNeg++] = -temperaturas[i];
        }// inverte sinal

        else{
            positivos[nPos++] = temperaturas[i];
        }
    }

    radixSort(negativos, nNeg);
    radixSort(positivos, nPos);

    printf("\n\t\t\t=== TEMPERATURAS ORDENADAS ===\n");

    for (int i = nNeg - 1; i >= 0; i--){ // Imprime negativos em ordem crescente
        printf("%d ", -negativos[i]);
    }

    for (int i = 0; i < nPos; i++){ // Depois positivos em ordem crescente
        printf("%d ", positivos[i]);
    }

    printf("\n");

    return 0;
}
