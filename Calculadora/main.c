#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float a = 0, b = 0, escholha = 0;

    printf("Calculado Simplis\n");
    scanf("%f", &a);
    scanf("%f", &b);
    return 0;
}
