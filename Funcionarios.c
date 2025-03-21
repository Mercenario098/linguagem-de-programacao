#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int size = 10;
    int sexo[size], idade[size], qtdfilhos[size], estadoCivil[size];
    int filho = 0;
    float salario[size];
    float salarioMedioPaisIdososSolteiro = 0;


    for (int i = 0; i < size; i++){
            printf("%d° Funcionario!", i+1);
            printf("\nQual o Seu salario: ");
            scanf("%f", &salario[i]);

            printf("Qual o seu sexo (1)Feminino (2)Masculino: ");
            scanf("%d", &sexo[i]);
            printf("Estado Civil (1)Casado (2)Solteiro: ");
            scanf("%d", &estadoCivil[i]);
            if(estadoCivil[i] == 2){
                if(sexo[i] == 1){

                }
            }

            printf("Tem filhos (1)Sim (2)Não: ");
            scanf("%d", &filho);
            if(filho == 1){
                printf("Quantos Filhos: ");
                scanf("%d", &qtdfilhos[i]);
            }
            else{
            }


            printf("\n\n");
    }
    printf("A média salarial dos pais idosos solteiro é de R$ %.3f reais",salarioMedioPaisIdososSolteiro);


    return 0;
}

