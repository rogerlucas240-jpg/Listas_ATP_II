#include <stdio.h>
int maiorr(int num[]){
    int maior=num[0];
    for(int i=1;i<10;i++){
        if(num[i]>maior){
            maior=num[i];
        }
    }
    return maior;
}


int menorr(int num[]){
    int menor=num[0];
    for(int i=1;i<10;i++){
        if(num[i]<menor){
            menor=num[i];
        }
    }
    return menor;
}


float media(int num[]){
    float med=0;
    for(int i=0;i<10;i++){
        med+=num[i];
    }
    return med/10.0;
}


int main(){
    int num[10];
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d\n",num[i]);
    }
    printf("\n");
    printf("%.2f\n",media(num));
    printf("Maior %d\n",maiorr(num));
    printf("Menor %d\n",menorr(num));

}