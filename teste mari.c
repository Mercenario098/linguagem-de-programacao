#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
 setlocale(LC_ALL, "Portuguese_Brazil");
 float salario[10];
 int idade[10];
 int sexo[10];
 int qtdfilhos[10];
 int estadocivil[10];

 print("teste MAri");

 for(int i = 0; i < 10; i++){
    printf("digite o valor do seu salario: ");
    scanf("%f", &salario[i]);
    printf("digite a idade: ");
    scanf("%d", &idade[i]);
    printf("para o sexo digite 1- F ou 2- M: ");
    scanf("%d", &sexo[i]);
    printf("digite a quantidade de filhos dos funcionarios: ");
    scanf("%d", &qtdfilhos[i]);
    printf(" qual estado civil digite 1- C ou 2 - S: ");
    scanf("%d", &estadocivil[i]);

 }

return 0;
 }
