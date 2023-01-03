#include <stdio.h>

main(){
    char string[21];

    printf("Digite uma palavra: ");
    scanf("%[^\n]", string);

    int i = strlen(string);
    for(i; i>=0; i--){
        printf("%c", string[i]);
    }

}
