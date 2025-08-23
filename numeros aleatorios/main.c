#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int size = 10;
    int aleatorio[size];
    int temp;

    srand(time(NULL));

    for(int i = 0; i < size; i++){
        aleatorio[i] = rand() % 10;
        printf("%d\t", aleatorio[i]);
    }

    printf("\n");

    for(int i = 0; i < size / 2; i++){
        temp = aleatorio[i];
        aleatorio[i] = aleatorio[size - 1 - i];
        aleatorio[size - 1 - i] = temp;
    }

    printf("\n");

    for(int i = 0; i < size; i++){
        printf("%d\t", aleatorio[i]);
    }

    return 0;
}
