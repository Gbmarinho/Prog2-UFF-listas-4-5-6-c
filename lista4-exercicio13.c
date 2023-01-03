#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void verificaQuantosTem(char *frase){
    int i, j, contador = 0, contadorEspaco = 0, cont = 0;
    char vetor[51], vetorUnico[27];
    strcpy(vetor, frase);
    //TRANFORMANDO EM APENAS AS LETRAS UNICAS;

    for(i=0;i<51;i++){
        if(vetor[i]=='\0'){
            break;
        }else{
            for(j=0;j<51;j++){
                if(vetor[j] == vetor[i] & j!=i){
                    vetor[j] = ' ';
                }
            }
        }
    }
    for(i=0;i<51;i++){
        if(frase[i] == ' '){
            contadorEspaco = contadorEspaco+1;
        }
    }
    for(i=0;i<51;i++){
        if(vetor[i]=='\0'){
            break;
        }
        if(frase[i] == ' ' && cont == 0){
            cont =cont +1;
            printf("' ' = %d ", contadorEspaco);
        }
        for(j=0;j<51;j++){
            if(vetor[i] != ' '&& vetor[i]==frase[j]){
                contador=contador +1;
            }
        }
        if(vetor[i] != ' '){
            printf("'%c' = %d ", vetor[i]-32, contador);
            contador = 0;
        }
    }
    //printf("\n%s\n", vetor);
}

int main(){
    char frase[51], i;
    printf("Digite uma frase(Max 50 caracteres): ");
    scanf(" %50[^\n]", &frase);
    for(i=0;i<51;i++){
        if(frase[i]=='\0'){
            break;
        }
        frase[i] = tolower(frase[i]);
    }
    verificaQuantosTem(frase);
    return 0;
}
