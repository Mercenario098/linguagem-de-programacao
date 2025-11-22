#include <stdio.h>
#include <stdlib.h>

int main(){
    char frase[50];

    scanf("%[^\n]", frase);

    printf("%s\n", frase);
}
