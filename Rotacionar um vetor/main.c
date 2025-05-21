#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int size = 3;
    int k = INT_MIN;
    int array[size];

    for(int i = 0; i < size; i++){
        printf("\n%d° numero: ", i+1);
        scanf("%d",  &array[i]);
    }
        printf("\nDigite o Valor de K: ");
        scanf("%d",  &k);
    for(int i = 0; i < size; i++){
    printf("%d - ", array[i]);
    }
    printf("\n\n");

    for(int i = 0; i < k; i++){
        int lastItem = array[size -1];

        for(int j = size - 1; j > 0; j--){
            array[j] = array[j-1];

        }
        array[0] = lastItem;
    }
    for(int i = 0; i < size; i++){
        printf("%d - ", array[i]);
    }
}
