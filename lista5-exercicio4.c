#include<stdio.h>
#include<string.h>

int main(){
    char palavra[21], guardaUltLetra, guardaPrimLetra;
    int contador = 0, i;
    printf("Digite uma palavra(max 20 caracteres): ");
    scanf("%20[^\n]", &palavra);
    guardaPrimLetra = palavra[0];
    for(i=0;palavra[i]!='\0'; i++){
        if(palavra[i+1]== '\0'){
            guardaUltLetra  = palavra[i];
        }
        contador = contador + 1;
    }
    printf("A ultima letra eh: '%c'\n", guardaUltLetra);
    printf("A primeira letra eh: '%c'\n", guardaPrimLetra);
    printf("O tamanho da palavra eh: %d\n", contador);
    return 0;
}
