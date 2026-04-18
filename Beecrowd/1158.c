#include <stdio.h>

int conta(int num[]){
    int x=num[0];
    int soma=0;
    if(x % 2 != 0){
        
        for(int i=0;i<num[1];i++){
            soma+=x;
            x+=2;
        }
        return soma;
    } else {
        x++;
        for(int i=0;i<num[1];i++){
            soma+=x;
            x+=2;
        }
        return soma;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int num[2];
    for(int i=0;i<n;i++){
        scanf("%d %d",&num[0],&num[1]);
        int result=conta(num);
        printf("%d\n",result);
    }
    return 0;
}