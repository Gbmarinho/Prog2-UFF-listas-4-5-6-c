#include<stdio.h>
#include<string.h>
#include <ctype.h>

void QuantasVezesApareceu(char *frase, char letra,int *vezes){
    int i, resultado = 0;
    for(i=0;i<21;i++){
        if(frase[i]=='\0'){
            break;
        }
        if(tolower(frase[i]) == tolower(letra)){
            *vezes= *vezes + 1;
        }
    }
}
int main(){
    char frase[21], letra;
    int vezes = 0;
    printf("Digite uma frase(max 20 caracteres): ");
    scanf(" %20[^\n]", &frase);
    fflush(stdin);
    printf("Agora digite uma letra para ver quantas vezes ela aparece na frase: ");
    scanf(" %c", &letra);
    fflush(stdin);
    QuantasVezesApareceu(frase, letra, &vezes);
    printf("A sua letra foi exibida %d vezes", vezes);

    return 0;
}
