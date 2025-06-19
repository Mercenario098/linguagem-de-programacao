#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char cpf[15];
    int i;

    srand(time(NULL));

    for(i = 0; i < 11; i++){
        cpf[i] = (rand() % 10 + '0');
        cpf[3] = '.';
        cpf[7] = '.';
        cpf[11] = '-';
        cpf[12] = ((((cpf[0] * 10) + (cpf[1] * 9) + (cpf[2] * 8) + (cpf[4] * 7) + (cpf[5] * 6) + (cpf[6] * 5) + (cpf[8] * 4) + (cpf[9] * 3) + (cpf[10] * 2)) % 11) + '0');
        cpf[13] = ((((cpf[0] * 11) + (cpf[1] * 10) + (cpf[2] * 9) + (cpf[4] * 8) + (cpf[5] * 7) + (cpf[6] * 6) + (cpf[8] * 5) + (cpf[9] * 4) + (cpf[10] * 3) + (cpf[12] * 2)) % 11) + '0');
        cpf[15] = '\0';
    }

    printf("%s", cpf);
}
