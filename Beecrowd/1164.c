#include <stdio.h>
int verifica(int n){
    int soma=0;
    for(int i=1;i<n;i++){
        if(n % i == 0){
            soma+=i;
        }
    }
    if(soma == n){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        int n;
        scanf("%d",&n);
        if(verifica(n)){
            printf("%d eh perfeito\n",n);
        } else {
        printf("%d nao eh perfeito\n",n);
        }
    }
    return 0;
}