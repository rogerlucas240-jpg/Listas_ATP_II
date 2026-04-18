#include <stdio.h>
int main(){
    int num[10];
    for(int i=0;i<10;i++){
        scanf(" %d",&num[i]);
    }

    int x[5];
    for(int i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    printf("Valores dos numeros lidos antes da mudanca por X: \n");

    for(int i=0;i<10;i++){
        printf("%d\n",num[i]);
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            if(num[i] == x[j]){
                num[i]=0;
            }
        }
    }

    printf("Valores dos numeros apos a mudanca por X: \n");
    for(int i=0;i<10;i++){
        printf("%d\n",num[i]);
    }
}