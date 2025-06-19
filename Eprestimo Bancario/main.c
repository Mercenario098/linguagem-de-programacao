#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculoPorcentagem(float porcento, float valor){
    float calculo = (porcento / valor) * 100;

    return calculo;
}

float calculodivide(float divide1, float divide2){
    float divide = divide1 / divide2;

    return divide;
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float salario, emprestimo, tempodeTrabalho;
    float divida, dividasAtuais;
    float parcela, calParcela, parcelaGeral;

    printf("\nQual o Valor do Salario: ");
    scanf("%f", &salario);
    printf("Quantos anos está trabalando na empresa: ");
    scanf("%f", &tempodeTrabalho);
    printf("Qual o valor das suas dividas: ");
    scanf("%f", &dividasAtuais);

    divida = calculoPorcentagem(dividasAtuais, salario);

    if (divida > 50){
        printf("\nEmpréstimo Recusado!");
        printf("\nDividas Muito alta!");
    }
    else{
        printf("\nQual o Valor do Emprestimo: ");
        scanf("%f", &emprestimo);

        if(tempodeTrabalho < 1){
            printf("\nParcelacelas maxima é 12.");
            printf("\nQual o numero da pacela do emprestimo: ");
            scanf("%f", &parcela);

            calParcela = calculodivide(emprestimo, parcela);
            parcelaGeral = calculoPorcentagem(calParcela, salario);

            if(parcelaGeral > 35){
                printf("\nEmpréstimo Recusado!");
                printf("\nParcela supeior a 35%% do salario!");
            }
            else{
                printf("\nEmpréstimo Liberado!");
                printf("\nO valor da parcela: %.2f", calParcela);
            }

        }
        else if(tempodeTrabalho >= 1 && tempodeTrabalho <= 3){
            printf("\nParcelacelas maxima é 24.");
            printf("\nQual o numero da pacela do emprestimo: ");
            scanf("%f", &parcela);

            calParcela = calculodivide(emprestimo, parcela);
            parcelaGeral = calculoPorcentagem(calParcela, salario);

            if(parcelaGeral > 35){
                printf("\nEmpréstimo Recusado!");
                printf("\nParcela supeior a 35%% do salario!");
            }
            else{
                printf("\nEmpréstimo Liberado!");
                printf("\nO valor da parcela: %.2f", calParcela);
            }
        }
        else{
        printf("\nParcelacelas maxima é 60.");
            printf("\nQual o numero da pacela do emprestimo: ");
            scanf("%f", &parcela);

            calParcela = calculodivide(emprestimo, parcela);
            parcelaGeral = calculoPorcentagem(calParcela, salario);

            if(parcelaGeral > 35){
                printf("\nEmpréstimo Recusado!");
                printf("\nParcela supeior a 35%% do salario!");
            }
            else{
                printf("\nEmpréstimo Liberado!");
                printf("\nO valor da parcela: %.2f", calParcela);
            }
        }
    }


    return 0;
}
