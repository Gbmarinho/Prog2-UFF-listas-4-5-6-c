#include <stdio.h>
#include <stdlib.h>

int *premiados(int n,int *inscr,float *t1,int p1,float *t2, int p2,int *tam){
    int i;
    float maior = 0;
    float medias[n];
    float *mainscr;
    for (i=0;i<n;i++){
        medias[i] = ((t1[i]*p1)+(t2[i]*p2))/(p1+p2);
    }
    for(i=0;i<n;i++){
        if(maior<medias[i]){
            maior = medias[i];
        }
    }
    int cont = 0;
    for(i=0;i<n;i++){
        if(maior==medias[i]){
            cont++;
        }
    }
    mainscr = (int*)malloc(cont*sizeof(int));
    int loc = 0;
    for (i=0;i<n;i++){
        if(maior==medias[i]){
            mainscr[loc]=inscr[i];
            loc++;
        }
    }
    *tam = cont;
    return mainscr;

}
