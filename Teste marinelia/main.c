#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int idades[10];
    int qtdfilhos[10];
    int sexo[10];
    int estadocivil[10];
    float salario[10];

    for(int i = 0; i < 10; i++){

        printf(" dados %d", i+1);
        scanf("%d", &idades [i]);
        printf("qtdfilhos %d", i++);
        scanf("%d", &qtdfilhos [i]);
        printf("sexo, 1 - F, 2 - M: ");
        scanf("%d", &sexo[i]);
    }
    return 0;
}
