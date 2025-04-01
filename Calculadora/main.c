#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    float numero1, numero2, resultado;
    int opcao, continuar = 1;

    do{
        printf("\nValor 1: ");
        scanf("%f", &numero1);
        printf("\nValor 2: ");
        scanf("%f", &numero2);

        printf("\nOpções:");
        printf("\n1 - Somar");
        printf("\n2 - Subitrair");
        printf("\n3 - multiplicar");
        printf("\n4 - dividir");
        printf("\n5 - Sair");
        printf("\nEscolha uma das opções: ");
        scanf("%d", &opcao);
        if(opcao == 1){
            resultado = somar(numero1, numero2);
        }
        else if(opcao == 2){
            resultado = subtrair(numero1, numero2);
        }
        else if(opcao == 3){
            resultado = multiplicar(numero1, numero2);
        }
        else if(opcao == 4){
            resultado = dividir(numero1, numero2);
        }
        else if(opcao == 5){
            continuar = 0 ;
        }
        printf("Resulta = %.2f", resultado);
    }
    while(continuar == 1);


    return 0;
}



