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
            printf("\nEmpréstimo Recusado!");
            printf("\nAs parcelas são superio a 50%% do seu salário mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela é 12 de %.2f!", parcela);
        }
        else{
            printf("\nEmpréstimo Liberado!");
            printf("\nAs parcelas são inferiores a 50%% do seu salário mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela é 12 de %.2f!", parcela);
        }
    }

    else if ( tempodetrabalho >= 12 && tempodetrabalho <= 36){
        parcela = emprestimo / 24;
        divida = (parcela / salario) * 100;

        if (divida > 50){
            printf("\nEmpréstimo Recusado!");
            printf("\nAs parcelas são superio a 50%% do seu salário mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela é 24 de %.2f!", parcela);
        }
        else{
            printf("\nEmpréstimo Liberado!");
            printf("\nAs parcelas são inferiores a 50%% do seu salário mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela é 24 de %.2f!", parcela);
        }
    }

    else{
        parcela = emprestimo / 60;
        divida = (parcela / salario) * 100;

        if (divida > 50){
            printf("\nEmpréstimo Recusado!");
            printf("\nAs parcelas são superio a 50%% do seu salário mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela é 60 de %.2f!", parcela);
        }
        else{
            printf("\nEmpréstimo Liberado!");
            printf("\nAs parcelas são inferiores a 50%% do seu salário mensal!");
            printf("\nParcela %.2f%% do seu salario mensal!", divida);
            printf("\nO valor da parcela é 60 de %.2f!", parcela);
        }
    }

    return 0;
}
