#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stralign.h>
#define FINAL_CARACTER \0

void clearString( char *str);
char isPalindrome( char *str);


int main(){
    setlocale(LC_ALL, "Portuguese_Brasil");

    char input[1000];

    printf("Digite a palavra ou frase: ");
    scanf("%[^\n}", input);

    clearString(input);

    printf("\n%s", input);


    return 0;
}

void clearString( char *str){
    int j = 0;

    for(int i = 0; str[i] != FINAL_CARACTER; i++){
        if(isalnum(str[i])){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = FINAL_CARACTER;
}

char* isPalindrome( char *str){
    int lastPosition = (strlen(str)-1);
    int left = ZERO, right = lastPosition;

    while(left < right){
        if(str[left] != str[right]){
        return 'Nâo'
        }
        left++;
        right++;
    }

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
