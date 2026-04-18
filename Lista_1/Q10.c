#include <stdio.h>
#include "funcao.h"

int somatorio(int num[],int n){
    int soma=0;
    for(int i = 0;i<n;i++){
        soma+=num[i];
    }
    return soma;
}


float cmedia(int num[],int n){
    float media=(somatorio(num,n))/(1.0*n);
    return media;
}


void result(int num[],int n){
    printf("O resultado da soma e: %d\n",somatorio(num,n));
    printf("O resultado da media e: %.2f\n",cmedia(num,n));
    printf("O maior numero e: %d\n",maior(num,n));
}   


int maior(int num[],int n){
    int temp=num[0];
    for(int i=1;i<n;i++){
        if(num[i]> temp){
            temp=num[i];
        }
    }
    return temp;
}


int main(){
    int n;
    printf("Informe quantos numeros serao utilizados.\n");
    scanf("%d",&n);
    int num[n];
    for(int i = 0;i<n;i++){
        scanf(" %d",&num[i]);
    }
    result(num,n);

    return 0;
}