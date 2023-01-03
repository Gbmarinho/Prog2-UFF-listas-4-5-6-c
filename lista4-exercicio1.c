#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    int vetorX[TAM], i, vetorY[TAM], cont  = 9;
    printf("Voce ira digitar 10 numeros para o vetor depois iremos trocar a posicao deles\n");
    for(i=0;i<TAM;i++){
        printf("Digite o numero da posicao %d do vetor: ", i+1);
        scanf("%d", &vetorX[i]);
        vetorY[cont] = vetorX[i];
        cont = cont - 1;
    }
    for(i=0;i<TAM;i++){
        printf("Vetor Y[%d] = %d\n", i+1, vetorY[i]);
    }
    return 0;
}
