#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int valida_mail(char *s){
    int contadorLetra = 0, contadorNumero = 0, contPonto, i, cont = 0, contador = strlen(s), soma=0;
    if(((s[0]>64 && s[0]<91)||(s[0]>96 && s[0]<122))&&(s[contador-1] != 46)){
        for(i=0; i<contador;i++){
            if((s[cont] == 45 || s[cont] == 95 || s[cont] == 46)||(s[cont]>47 && s[cont]<58)||(s[cont]>64 && s[cont]<91)||(s[cont]>96 && s[cont]<122)){
                if(s[cont]>47 && s[cont]<58){
                    contadorNumero = contadorNumero + 1;
                }else if((s[cont]>64 && s[cont]<91)||(s[cont]>96 && s[cont]<122)){
                    contadorLetra = contadorLetra + 1;
                }
                if(s[cont] == 46){
                    contPonto = contPonto + 1;
                    if(contPonto == 2){
                        return 1;
                    }
                }else{
                    contPonto = 0;
                }
                cont=cont+1;
            }else{
                return 1;
            }
        }

    }else{
        return 1;
    }
    soma = contadorLetra+contadorNumero;
    if(soma == 2){
        return 0;
    }
    if(contadorLetra < 2 && contadorNumero < 2){

        return 1;
    }
    return 0;
}
int main(){
    char a[65], cont = 0, valida;
    printf("Digite a parte antes do @ do seu email e depois clique em enter: ");
    scanf("%65[^\n]", &a);
    if(cont > 65){
        printf("\nEmail invalido!\n");
    }else{
        valida = valida_mail(a);
        if(valida == 1){
            printf("\nEmail invalido!\n");
        }else{
            printf("\nEmail valido!\n");
        }
    }
    return 0;
}
