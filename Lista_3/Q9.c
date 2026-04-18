#include <stdio.h>
int recursiva(int n){
    if(n ==0){
        return 1;
    } else{
        return n* recursiva(n-1);
    }
}
int iterativa(int n){
    int fat=1;
    for(int i=n;i>1;i--){
        fat*=i;
    }
    return fat;
}
int main(){
    int n;
    printf("Escolha o numero qual desefa fazer fatorial\n");
    scanf("%d",&n);
    printf("Fatorial com funcao iterativa: %d\n",iterativa(n));
    printf("Fatorial com funcao recursiva: %d\n",recursiva(n));
    return 0;
}