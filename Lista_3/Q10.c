#include <stdio.h>
void modifica(int num[],int n){
    for(int i=0;i<n;i++){
        num[i]=num[i]*2;
    }
}

void mostrar(int num[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int num[n];

    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("Antes da alteracao\n");
    mostrar(num,n);
    modifica(num,n);
    printf("Apos alteracao\n");
    mostrar(num,n);
    return 0;
}