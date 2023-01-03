#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char nome[81], abrev[11];
    int i = 1, j = 1, a, b;

    printf("Digite um nome: ");
    scanf("%80[^\n]", nome);

    int size = strlen(nome) - 1;
    abrev[0] = nome[0] - 32;

    for(i; i<size; i++){
        if((nome[i] == 'd') && (nome[i+2] == ' ')){
            continue;
        }
        else{
            if(nome[i-1] == ' '){
                a = nome[i] - 32;
                abrev[j] = a;
                j++;
            }
        }
    }
    b = strlen(abrev);
    for(i=0; i<=b; i++){
        if((abrev[i] > 65)&&(abrev[i] < 90))
            printf("%c", abrev[i]);
    }

}
