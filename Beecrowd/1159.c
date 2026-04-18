#include <stdio.h>
int calculo(int n){
    int soma=0;
    if(n % 2 != 0){
        n++;
        for(int i=0;i<5;i++){
            soma+=n;
            n+=2;
        }
    } else {
        for(int i=0;i<5;i++){
            soma+=n;
            n+=2;
        }
    }
    return soma;
}

int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n ==0){
            break;
        }
        int result= calculo(n);
        printf("%d\n",result);
    }
    return 0;
}