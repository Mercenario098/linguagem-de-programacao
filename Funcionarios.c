#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int size = 10;
    int sexo[size], idade[size], qtdfilhos[size], estadoCivil[size];
    int filho = 0, menor18 = 0, idoso = 0;
    float salario[size];
    float salarioTotal = 0, salarioMedioPaisIdososSolteiro = 0, maiorSalario;

    for (int i = 0; i < size; i++){
            printf("%d� Funcionario!", i+1);
            printf("\nQual o Seu sal�rio: ");
            scanf("%f", &salario[i]);
            printf("Qual a sua idade: ");
            scanf("%d", &idade[i]);
            printf("Qual o seu sexo (1)Feminino (2)Masculino: ");
            scanf("%d", &sexo[i]);
            printf("Estado Civil (1)Casado (2)Solteiro: ");
            scanf("%d", &estadoCivil[i]);
            printf("Tem filhos (1)Sim (2)N�o: ");
            scanf("%d", &filho);

            if(filho == 1){
                printf("Quantos Filhos: ");
                scanf("%d", &qtdfilhos[i]);
            }
            else{
            }
            if(sexo[i] == 1 && filho == 2){ //Mostrar o sal�rio da mulher que ganha o maior sal�rio e que n�o tem filhos
                if(maiorSalario < salario[i]){
                    maiorSalario = salario[i];
                }
            }
            else if(idade[i] < 18 && filho == 1 && estadoCivil[i] == 1 && salario[i] > 3000){//A quantidade dos pais adolescentes (idade < 18) que n�o s�o solteiros que ganham acima de R$ 3000
                menor18++;
            }
            else if(idade[i] >= 60 && filho == 1 && estadoCivil[i] == 2){ //A m�dia salarial dos pais idosos solteiros
                idoso++;
                salarioTotal += salario[i];
            }

            printf("\n\n");
    }

    if(salarioTotal == 0){
        salarioMedioPaisIdososSolteiro = 0;
    }
    else{
        salarioMedioPaisIdososSolteiro = salarioTotal / idoso;
    }

    printf("A m�dia salarial dos pais idosos solteiro � de: R$ %.2f reais", salarioMedioPaisIdososSolteiro);
    printf("\nO sal�rio da mulher solteira e sem filhos �: %.2f reais", maiorSalario);
    printf("\nO total de  pais adolescentes menor de idade com sal�rio acima de R$ 3000 �: %d ", menor18);

    return 0;
}

