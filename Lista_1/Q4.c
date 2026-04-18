#include <stdio.h>

void saudacao(char nome[]){
    printf("Ola, %s\n",nome);
}

int main(){
    char nome[20];
    scanf("%19[^\n]",nome);
    saudacao(nome);
    return 0;
}