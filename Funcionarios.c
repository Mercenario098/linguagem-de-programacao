#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int size = 10;
    int sexo[size], idade[size], qtdfilhos[size], estadoCivil[size];
    int temFilho = 0, feminino = 0, masculino = 0;
    int qtdmenor18 = 0, maioridade = 18, qtdidoso = 0, idoso = 60;
    float salario[size];
    float salarioTotal = 0, salarioMedioPaisIdososSolteiro = 0, maiorSalario = 0,salariosuperio = 3000;

    for (int i = 0; i < size; i++){
            printf("%d° Funcionario!", i+1);
            printf("\nQual o Seu salário: ");
            scanf("%f", &salario[i]);
            printf("Qual a sua idade: ");
            scanf("%d", &idade[i]);
            printf("Qual o seu sexo (1)Feminino (2)Masculino: ");
            scanf("%d", &sexo[i]);
            printf("Estado Civil (1)Casado (2)Solteiro: ");
            scanf("%d", &estadoCivil[i]);
            printf("Tem filhos (1)Sim (2)Não: ");
            scanf("%d", &temFilho);

            if(temFilho == 1){
                printf("Quantos Filhos: ");
                scanf("%d", &qtdfilhos[i]);
                if(sexo[i] == 1){
                        feminino++;
                }
                else if(sexo[i] == 2){
                    masculino++;
                }
            }
            if(sexo[i] == 1 && temFilho == 2){ //Mostrar o salário da mulher que ganha o maior salário e que não tem filhos
                if(maiorSalario < salario[i]){
                    maiorSalario = salario[i];
                }
            }
            else if(idade[i] < maioridade && temFilho == 1 && estadoCivil[i] == 1 && salario[i] > salariosuperio){//A quantidade dos pais adolescentes (idade < 18) que não são solteiros que ganham acima de R$ 3000
                qtdmenor18++;
            }
            else if(idade[i] >= idoso && temFilho == 1 && estadoCivil[i] == 2){ //A média salarial dos pais idosos solteiros
                qtdidoso++;
                salarioTotal += salario[i];
            }

            printf("\n\n");
    }

    if(salarioTotal == 0){
        salarioMedioPaisIdososSolteiro = 0;
    }
    else{
        salarioMedioPaisIdososSolteiro = salarioTotal / qtdidoso;
    }

    printf("A média salarial dos pais idosos solteiro é de: R$ %.2f reais", salarioMedioPaisIdososSolteiro);
    printf("\nO salário da mulher solteira e sem filhos é: %.2f reais", maiorSalario);
    printf("\nO total de  pais adolescentes menor de idade com salário acima de R$ 3000 é: %d ", qtdmenor18);

    return 0;
}

