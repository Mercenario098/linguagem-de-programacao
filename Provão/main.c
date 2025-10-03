#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n %2){
        printf("IMPAR");
    } else {
        printf("PAR");
    }

    return 0;
}

