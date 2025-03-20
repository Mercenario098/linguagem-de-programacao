#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int idade[8];
    int maior18= 0, menor18 = 0, igual18=0, totalidade=0,mediaidade=0;

    for(int i = 0; i < 8; i++){
        printf("%dª pesquisa!", i+1);
        printf("\nQual a sua idade:");
        scanf("%d", &idade[i]);
        if(idade[i] > 18){
            maior18++;
        }
        else if(idade[i] == 18 || idade[i] == 20){
            igual18++;
        }
        else{
            menor18++;
        }
    }
    for(int i = 0; i < 8; i++){
        printf("\nResposta da %dª Pesquisa!", i+1);
        printf("\nA minha idade é: %d", idade[i]);

    }
    totalidade = menor18+maior18;
    mediaidade = totalidade/8;
    printf("\nO total de menor de idade é %d", menor18);
    printf("\nO total de maior de idade é %d", maior18);
    printf("\nO total da media é %d", igual18);
    return 0;


}
