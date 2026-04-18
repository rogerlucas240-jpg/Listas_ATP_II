#include <stdio.h>
void contagemp(int num[],int n,int *countp){
    for(int i=0;i<n;i++){
        if(num[i] % 2 == 0){
            (*countp)++;
        } 
    }
}


void contagemi(int num[],int n,int *counti){
    for(int i=0;i<n;i++){
        if(num[i] % 2 != 0){
            (*counti)++;
        } 
    }
}


void leiturap(int num[],int n,int par[]){
    int j=0;
    for(int i=0;i<n;i++){
        if(num[i] % 2 == 0){
            par[j] = num[i];
            j++;
        }
    }
}

void leiturai(int num[],int n,int impar[]){
    int j=0;
    for(int i=0;i<n;i++){
        if(num[i] % 2 != 0){
            impar[j] = num[i];
            j++;
        }
    }
}


void mostrarp(int par[],int countp){
    for(int i=0;i<countp;i++){
        printf("%d\n",par[i]);
    }
}

void mostrari(int impar[],int counti){
    for(int i=0;i<counti;i++){
        printf("%d\n",impar[i]);
    }
}


int main(){
    int n;
    int counti=0,countp=0;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    contagemp(num,n,&countp);
    contagemi(num,n,&counti);

    int par[countp];
    int impar[counti];

    leiturap(num,n,par);
    leiturai(num,n,impar);
    printf("Numeros pares: \n");
    mostrarp(par,countp);
    printf("Numeros impares: \n");
    mostrari(impar,counti);
    return 0;
}