#include <stdio.h>
int somatoria(int n){
    if(n == 0){
        return 0;
    } else {
        return n + somatoria(n-1);
    }
}


int main(){
    int n;
    printf("Ate qual numero deseja fazer a somatoria? ");
    scanf(" %d",&n);
    printf("A somatoria de %d ate 1 eh: %d",n,somatoria(n));
}