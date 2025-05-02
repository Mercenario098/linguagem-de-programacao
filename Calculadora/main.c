#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float somar(int valor1, int valor2){
    return(valor1 + valor2);
}

float subtrair(int valor1, int valor2){
    return(valor1 - valor2);
}

float multiplicar(int valor1, int valor2){
    return(valor1 * valor2);
}

float dividir(int valor1, int valor2){
    if(valor2 != 0){
        return(valor1 / valor2);
    }
    else{
        printf("\nNão existe divisão por Zero!");
        return 0;
    }
}

float potenciacao(float valor1, float valor2){
    return(pow(valor1,valor2));
}

float raizQuadrada(float valor){
    return(sqrt(valor));
}

float modulo(int valor){
    return(abs(valor));
}
int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    float numero1 = 0, numero2 = 0, resultado = 0;
    int opcao = 0, sair = 0;

    do{
        printf("\n\t>>>>Calculadora<<<<");
        printf("\n\t1 - Somar");
        printf("\n\t2 - Subitrair");
        printf("\n\t3 - multiplicar");
        printf("\n\t4 - dividir");
        printf("\n\t5 - Potenciação");
        printf("\n\t6 - Raiz Quadrada");
        printf("\n\t7 - Modulo");
        printf("\n\t8 - Sair");
        printf("\n\t>>>> ");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("\n\tValor 1: ");
            scanf("%f", &numero1);
            printf("\n\tValor 2: ");
            scanf("%f", &numero2);
            resultado = somar(numero1, numero2);
            break;

        case 2:
            printf("\n\tValor 1: ");
            scanf("%f", &numero1);
            printf("\n\tValor 2: ");
            scanf("%f", &numero2);
            resultado = subtrair(numero1, numero2);
            break;

        case 3:
            printf("\n\tValor 1: ");
            scanf("%f", &numero1);
            printf("\n\tValor 2: ");
            scanf("%f", &numero2);
            resultado = multiplicar(numero1, numero2);
            break;

        case 4:
            printf("\n\tValor 1: ");
            scanf("%f", &numero1);
            printf("\n\tValor 2: ");
            scanf("%f", &numero2);
            resultado = dividir(numero1, numero2);
            break;

        case 5:
            printf("\n\tBase: ");
            scanf("%f", &numero1);
            printf("\n\tExpoente: ");
            scanf("%f", &numero2);
            resultado = potenciacao(numero1,numero2);
            break;

        case 6:
            printf("\n\tQual a Raiz Quadrada: ");
            scanf("%f", &numero1);
            resultado = raizQuadrada(numero1);
            break;

        case 7:
            printf("\n\tQual o Moludo: ");
            scanf("%f", &numero1);
            resultado = modulo(numero1);
            break;

        case 8:
            sair = 1;
            break;

        default:
            printf("\n\tOpção Invalida!\n");
        }

        printf("\n\tResultado = %.2f", resultado);
        printf("\n\n");

    }while(!sair);


    return 0;
}



