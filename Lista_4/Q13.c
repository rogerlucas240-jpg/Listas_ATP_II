#include <stdio.h>
int main(){
    char frase[100];
    char palavra[50];
    int achou=0;
    int i,j;
    scanf(" %99[^\n]",frase);
    scanf(" %49[^\n]",palavra);
    for(i=0; frase[i] != '\0';i++){
        j=0;
        while(palavra[j] != '\0' && frase[i+j] == palavra[j]){
            j++;
        }
        if(palavra[j] == '\0'){
            achou = 1;
            break;
        }
    }
    if(achou){
        printf("A frase contem a palavra.\n");
    } else {
        printf("A frase nao contem a palavra.\n");
    }
    return 0;
}