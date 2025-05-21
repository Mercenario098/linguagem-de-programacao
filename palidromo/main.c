#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define FINAL_CARACTER '\0'

void clearString(char *str);
int isPalindrome(char *str);

int main() {
    setlocale(LC_ALL, "Portuguese");

    char input[1000];

    printf("Digite a palavra ou frase: ");
    scanf(" %[^\n]", input);

    clearString(input);

    printf("\nTexto: %s", input);

    if (isPalindrome(input)) {
        printf("\nÉ um palíndromo.\n");
    } else {
        printf("\nNão é um palíndromo.\n");
    }

    return 0;
}

void clearString(char *str) {
    int j = 0;
    for (int i = 0; str[i] != FINAL_CARACTER; i++) {
        if (isalnum((unsigned char)str[i])) {
            str[j++] = tolower((unsigned char)str[i]);
        }
    }
    str[j] = FINAL_CARACTER;
}

int isPalindrome(char *str) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}


/*void clearString( char *str){
    int j = 0;

    for(int i = 0; i < 100; i++){
        if( str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
}*/
