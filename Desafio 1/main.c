#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*O usuário entra com uma palavra ou frase e teu código verifica se é um palíndromo.
palindromo é quando uma palavra ou frase é igual lida de trás pra frente*/

int main(){
   setlocale(LC_ALL, "Portuguese_Brazil");

   char palavra[100];
   int controle = 0;

   printf("Digite o seu Palindromo: ");
   scanf("%[^\n]", palavra); //%[^\n] usado para leitura de texto ou frases
   printf("%s", palavra);




    return 0;
}
