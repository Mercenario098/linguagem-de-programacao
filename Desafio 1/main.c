#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*O usu�rio entra com uma palavra ou frase e teu c�digo verifica se � um pal�ndromo.
palindromo � quando uma palavra ou frase � igual lida de tr�s pra frente*/

int main(){
   setlocale(LC_ALL, "Portuguese_Brazil");

   char palavra[100];
   int controle = 0;

   printf("Digite o seu Palindromo: ");
   scanf("%[^\n]", palavra); //%[^\n] usado para leitura de texto ou frases
   printf("%s", palavra);




    return 0;
}
