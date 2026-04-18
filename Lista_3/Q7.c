#include <stdio.h>
void leitura(int num[],int n){
    for(int i=0;i<n;i++){
        scanf(" %d",&num[i]);
    }
}
void mostrar(int num[],int n){
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
}
void dobra(int num[],int n){
    for(int i=0;i<n;i++){
        num[i]=num[i]*2;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    leitura(num,n);
    mostrar(num,n);
    dobra(num,n);
    mostrar(num,n);
    return 0;
}