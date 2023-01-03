#include <stdio.h>
#include <stdlib.h>

char* cifraCesar(char* msg){
    char *cifraDeCesar;
    int i;
    for(i=0;i<101;i++){
        if(msg[i]=='\0'){
            break;
        }else{
            if((msg[i]=='x' || msg[i]=='y' || msg[i]=='z')||(msg[i]=='X' || msg[i]=='Y' || msg[i]=='Z')){
                if(msg[i]=='x'){
                    cifraDeCesar[i] = 'a';
                }
                if(msg[i]=='y'){
                    cifraDeCesar[i] = 'b';
                }
                if(msg[i]=='z'){
                    cifraDeCesar[i] = 'c';
                }
                if(msg[i]=='X'){
                    cifraDeCesar[i] = 'A';
                }
                if(msg[i]=='Y'){
                    cifraDeCesar[i] = 'B';
                }
                if(msg[i]=='Z'){
                    cifraDeCesar[i] = 'C';
                }
            }else if(msg[i]==' '){
                cifraDeCesar[i] = msg[i];
            }else{
                cifraDeCesar[i] = msg[i]+3;
            }
        }
    }
    return cifraDeCesar;

}

int main(){
    char msg[101], *msgCifrada;
    printf("Digit uma frase e iremos codificar ela em cifra de cesar: ");
    scanf(" %100[^\n]", &msg);
    msgCifrada = cifraCesar(msg);
    printf("%s", msgCifrada);
    return 0;
}
