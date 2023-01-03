#include <stdio.h>
#include <stdlib.h>

void retira(char *frase, char letra, char *novaFrase){
    int i;
    for(i=0; i<21; i++){
        if(frase[i]=='\0'){
            novaFrase[i] = '\0';
            break;
        }
        if(frase[i] == letra){
            novaFrase[i] = 32;
        }else{
            novaFrase[i] = frase[i];
        }
    }
    printf("%s", novaFrase);

}
void retiraRealoca(char *frase, char letra, char *novaFrase){
    int i, contador1 = 0, contador2 = 0;
    for(i=0; i<21; i++){
        if(frase[i]=='\0'){
            novaFrase[contador1] = '\0';
            break;
        }
        if(frase[contador2] == letra){
            contador2 =contador2 +1;
            novaFrase[contador1] = frase[contador2];
        }else{
            novaFrase[contador1] = frase[contador2];
        }
        contador1 = contador1 +1;
        contador2 = contador2 +1;
    }
    printf("%s", novaFrase);

}
int main(){
    char frase[21], letra, novaFrase[21];
    printf("Agora digite uma frase qualquer(Max de 20 caracteres): ");
    scanf(" %20[^\n]", &frase);
    fflush(stdin);
    printf("Agora digite uma letra qualquer: ");
    scanf("%c", &letra);
    fflush(stdin);
    printf("Frase sem a letra escolhida e com espaços do lugar: \n");
    retira(frase, letra, novaFrase);
    printf("\nFrase sem a letra escolhida e com espacos realocados: \n");
    retiraRealoca(frase, letra, novaFrase);
    return 0;
}
