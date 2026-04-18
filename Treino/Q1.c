#include <stdio.h>
void soma(int, int,int*);
void dobro(int,int*);

int main(){

    int a, b,result=0,resa=0,resb=0,resf=0;

    printf("Bem-vindo ao novo programa.\n\n");
    printf("Informe os valores de A e B: \n");
    scanf("%d %d", &a, &b);
    soma(a,b,&result);
    printf("A soma de A com B = %d\n", result);
    dobro(a,&resa);
    printf("O dobro de A = %d\n",resa);
    dobro(b,&resb);
    printf("O dobro de B = %d\n",resb);
    soma(resa,resb,&resf);
    printf("A soma do dobro de A com o dobro de B = %d\n", resf);

    return 0;
}

void soma(int a, int b,int *result){
    *result=a+b;
}

void  dobro(int n,int *result){
    *result=n*2;
}