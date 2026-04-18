#include <stdio.h>
void quadrado(int *n){
    (*n)=(*n) * (*n);
}
int main(){
    int n;
    scanf("%d",&n);
    quadrado(&n);
    printf("%d\n",n);
    return 0;
}