#include <stdio.h>
#include <stdlib.h>


int main(){
    int vetorR[5], vetorS[10]={1,3,5,82,34,15,17,9,10,8}, vetorX[10] = {0,0,0,0,0,0,0,0,0,0}, i, j, cont = 0;
    printf("Digite 5 numeros e veja quais tambem estao no outro vetor: \n");
    for(i=0;i<5;i++){
        printf("Digite o numero da posicao %d: ", i+1);
        scanf("%d", &vetorR[i]);
    }
    for(i=0;i<10;i++){
        for(j = 0;j<5;j++){
            if(vetorS[i] == vetorR[j]){
                vetorX[cont] = vetorS[i];
                cont =cont+1;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(vetorX[i] != 0 && i != j){
                if(vetorX[i] == vetorX[j]){
                    vetorX[i] = 0;
                }
            }
        }
    }
    printf("\n");
    printf("O Vetor S tem os seguintes numeros: ");
    for(i=0; i<10;i++){
        printf("%d ", vetorS[i]);
    }
    printf("\n");
    printf("\n");
    printf("Os valores que voce escreveu q estao dentro do vetor S sao: ");
    for(i=0; i<10;i++){
        if(vetorX[i] != 0){
            printf("%d ", vetorX[i]);
        }
    }
    return 0;
}
