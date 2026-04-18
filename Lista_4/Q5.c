#include <stdio.h>
int main(){
    int num,resto,countn[10] = {0};
    scanf("%d",&num);
    if(num < 0) num = -num;
    do{
        resto = 0;
        resto = num % 10;
        for(int i=0;i<=9;i++){
            if(resto == i){
                countn[i]++;
            }
        }
        num/=10;
    }while(num > 0);
    for(int i=0;i<=9;i++){
        printf("%d=%d\n",i,countn[i]);
    }
    return 0;
}