#include <stdio.h>

void mostrar(int num[],int x){
    for(int i=0;i<15;i++){
        printf("%d\n",num[i]);
    }
}


int main(){
    int num[15];
    int x;
    for(int i=0;i<15;i++){
        scanf("%d",&num[i]);
    }
    scanf("%d",&x);
    printf("Antes da passagem.\n");
    mostrar(num,x);

    //crescente
    for(int i=0;i< x-1;i++){
        for(int j=0;j< x-1-i;j++){
            if(num[j] > num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    //decrescente
    for(int i = x + 1; i < 15; i++){
        for(int j = x + 1; j < 14; j++){
            if(num[j] < num[j + 1]){
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("Apos ordenacao.\n");
    mostrar(num,x);
    return 0;
}