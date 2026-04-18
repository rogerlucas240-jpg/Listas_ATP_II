#include <stdio.h>

int fator(int n){
    if(n == 1){
        return 1;
    } else {
        return n* fator(n-1);
    }
}

int main(){

    int n;
    printf("Qual fatorial deseja fazer: \n");
    scanf(" %d",&n);
    printf("O resultado do fatorial de %d eh: %d\n",n,fator(n));
    return 0;
}