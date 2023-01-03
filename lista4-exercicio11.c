#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL));
    int aleatorio;
    int vetor1[20], vetor2[20],vetor4[20], i;
    char cont, vetor3[20];
    for(i=0;i<20;i++){
        aleatorio = rand() % 30;
        vetor1[i] = aleatorio;
        aleatorio = rand() % 30;
        vetor2[i] = aleatorio;
    }
    printf("vetor1: ");
    for(i=0;i<20;i++){
        printf(" %d", vetor1[i]);
    }
    printf("\nvetor2: ");
    for(i=0;i<20;i++){
        printf(" %d", vetor2[i]);
    }
    printf("\n");
    printf("Digite 20 caracteres('+', '-', '/', '*') para fazer a conta entre o vetor1 e vetor 2: \n");
    for(i=0;i<20;i++){
        printf("\nDigite a conta %d: ", i);
        scanf("%c", &cont);
        fflush(stdin);
        vetor3[i] = cont;
    }
    for(i=0;i<20;i++){
        if(vetor3[i] == '+'){
            vetor4[i] = vetor1[i] + vetor2[i];
        }
        if(vetor3[i] == '-'){
            vetor4[i] = vetor1[i] - vetor2[i];
        }
        if(vetor3[i] == '/'){
            vetor4[i] = vetor1[i] / vetor2[i];
        }
        if(vetor3[i] == '*'){
            vetor4[i] = vetor1[i] * vetor2[i];
        }
    }
    printf("\n");
    printf("\nvetor4: ");
    for(i=0;i<20;i++){
        printf(" %d", vetor4[i]);
    }
    printf("\n");
    return 0;
}
