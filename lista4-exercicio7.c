#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void CamelCase (char *s){
    int i, cont = 0, contFraseVelha = 0, contFraseNova = 0;
    s[0] = s[0] - 32;
    for(i=0; i<50; i++){
        if(s[cont] == 32){
                s[cont+1] = s[cont+1]-32;
        }
        if(s[cont] == '\0'){
            break;
        }
        cont = cont + 1;
    }
    char novaFrase[cont];
    for(i=0; i<cont; i++){
        if(s[contFraseVelha] == 32){
            contFraseVelha= contFraseVelha+1;
            novaFrase[contFraseNova] = s[contFraseVelha];
        }else{
            novaFrase[contFraseNova] = s[contFraseVelha];
        }
        contFraseNova = contFraseNova + 1;
        contFraseVelha= contFraseVelha+1;
    }
    printf("\nA frase no modelo Camel case: %s\n", novaFrase);
}
int main(){
    char FraseCamel[50], cont = 0, i;
    printf("Digite uma frase e iremos transformar em Camel Case(Maximo de 50 caracteres): ");
    while(cont < 50){
        FraseCamel[cont] = getche();
        if(FraseCamel[cont] == '\r'){
            FraseCamel[cont] == '\0';
            break;
        }
        cont = cont + 1;
    }
    CamelCase(FraseCamel);
    return 0;
}
