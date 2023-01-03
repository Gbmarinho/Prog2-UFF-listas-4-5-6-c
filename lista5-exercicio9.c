#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char nome[101], endereco[21], telefone[10];

    printf("Digite seu nome:");
    scanf("%[^\n]", nome);
    fflush(stdin);

    printf("\nDigite seu endereco:");
    scanf("%[^\n]", endereco);
    fflush(stdin);

    printf("\nDigite seu telefone:");
    scanf("%[^\n]", telefone);
    fflush(stdin);

    strcat(nome, endereco);
    strcat(nome, telefone);

    printf("\n%s", nome);
}

