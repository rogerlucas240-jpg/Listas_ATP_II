#include <stdio.h>
int contar(int n){
    if(n <= 0){
        return 1;
    } else {
        return 1 +contar(n-1);
    }
}

int main(){
    int n;
    printf("Escolha o numero para ser contado: \n");
    scanf("%d",&n);
    printf("Sao %d numeros\n",contar(n));
    return 0;
}