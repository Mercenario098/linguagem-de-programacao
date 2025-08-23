#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float salario = 0, divida = 0, emprestimo = 0, parcela = 0, tempodetrabalho = 0, dividasAtuais = 0;

    printf("\nQual o Valor do Salario: ");
    scanf("%f", &salario);
    printf("\nQuantos meses esta trabalhando: ");
    scanf("%f", &tempodetrabalho);
    printf("Qual o Valor total das suas dividas atuais: ");
    scanf("%f", &dividasAtuais);
    printf("Qual o Valor do Emprestimo: ");
    scanf("%f", &emprestimo);


    if ( tempodetrabalho < 12){
        parcela = emprestimo / 12;
        divida = (parcela / salario) * 100;

        if (divida > 50){
            printf("\nEmpr�stimo Recusado!");
            printf("\nAs parcelas s�o superio a 50%% do seu sal�rio mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela � 12 de %.2f!", parcela);
        }
        else{
            printf("\nEmpr�stimo Liberado!");
            printf("\nAs parcelas s�o inferiores a 50%% do seu sal�rio mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela � 12 de %.2f!", parcela);
        }
    }

    else if ( tempodetrabalho >= 12 && tempodetrabalho <= 36){
        parcela = emprestimo / 24;
        divida = (parcela / salario) * 100;

        if (divida > 50){
            printf("\nEmpr�stimo Recusado!");
            printf("\nAs parcelas s�o superio a 50%% do seu sal�rio mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela � 24 de %.2f!", parcela);
        }
        else{
            printf("\nEmpr�stimo Liberado!");
            printf("\nAs parcelas s�o inferiores a 50%% do seu sal�rio mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela � 24 de %.2f!", parcela);
        }
    }

    else{
        parcela = emprestimo / 60;
        divida = (parcela / salario) * 100;

        if (divida > 50){
            printf("\nEmpr�stimo Recusado!");
            printf("\nAs parcelas s�o superio a 50%% do seu sal�rio mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela � 60 de %.2f!", parcela);
        }
        else{
            printf("\nEmpr�stimo Liberado!");
            printf("\nAs parcelas s�o inferiores a 50%% do seu sal�rio mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela � 60 de %.2f!", parcela);
        }
    }

    return 0;
}
