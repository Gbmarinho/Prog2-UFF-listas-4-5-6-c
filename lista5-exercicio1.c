#include <stdio.h>
#include <string.h>

void contaNumVogais(char *frase,int *numVogais){
    int i;
    for(i=0;i<101;i++){
        if(frase[i]=='\0'){
            break;
        }
        if((frase[i]=='a' || frase[i]=='A')||(frase[i]=='e' || frase[i]=='E')||(frase[i]=='i' || frase[i]=='I')||(frase[i]=='o' || frase[i]=='O')||(frase[i]=='u' || frase[i]=='U')){
            *numVogais = *numVogais+1;
        }
    }
}
int main(){
    char frase[101];
    int NumVogais;
    printf("Digite um frase(Max 100 caracteres): ");
    scanf(" %100[^\n]", &frase);
    contaNumVogais(frase, &NumVogais);
    printf("\nO numero de vogais e de: %d\n", NumVogais);
    return 0;
}
