#include <stdio.h>
void result(int c){
    printf("Resultado da soma: %d\n",c);
}
int soma(int a,int b){
    int c;
    c=a+b;
    result(c);
}
int main(){
    int a,b;
    scanf(" %d %d",&a,&b);
    soma(a,b);
    return 0;
}