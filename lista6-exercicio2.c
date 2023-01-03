#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *compactar(char *s){
    int tam = strlen(s), cont1 = 0, cont2 = 0, total, contador = 0, i, a = tam-1;
    char *novaFrase;
    for(i=0;i<tam;i++){
        if(s[i] == ' '){
            s[i] == '-';
            cont1 = cont1 + 1;
        }else{
            break;
        }
    }
    for(i=0;i<tam;i++){
        if(s[a] == ' '){
            s[a] == '-';
            cont2 = cont2 + 1;
            a--;
        }else{
            break;
        }
    }
    total = tam - (cont1+cont2);
    tam = tam - cont2;
    novaFrase = (char*)  malloc(total * sizeof(char));
    if(novaFrase==NULL){
        exit(1);
    }
    for(i=cont1;i<tam;i++){
        if(s[i]!='-'){
            novaFrase[contador] = s[i];
            contador++;
        }
    }
    return novaFrase;
}


int main(){
    char s[101], *p;
    int total;
    printf("Digite uma frase: ");
    scanf(" %100[^\n]", &s);
    p = compactar(s);
    total = strlen(p);
    printf("A frase sem os espaços dos lados fica:%s.", p);
    return 0;
}
