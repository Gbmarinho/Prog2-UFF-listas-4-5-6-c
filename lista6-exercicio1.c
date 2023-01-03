#include <stdio.h>
#include <stdlib.h>

float *acima_da_media(int n, float*vet, int* tam){
    int i, nacima=0, loc = 0;
    float *veta;
    float soma=0, media=0;
    for (i=0;i<n;i++){
        soma += vet[i];
    }
    media = soma/n;
    for (i=0;i<n;i++){
        if (vet[i]>media){
            nacima++;
        }
    }
    veta = (float*)malloc(nacima*sizeof(float));
        if (veta==NULL) exit(1);

    for (i=0;i<n;i++){
        if (vet[i]>media){
            veta[loc]=vet[i];
            loc++;
        }
    }
    *tam = &nacima;
    return veta;
}
