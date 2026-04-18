#include <stdio.h>
void alterar(int *n){
    *n=20;
    printf("Valor de x dentro da funcao: %d\n",*n);
}
int main(){
    int n=10;
    printf("Valor de x dentro da main %d\n",n);
    alterar(&n);
    printf("Valor de x dentro da main apos alteracao: %d\n",n);
    return 0;
}