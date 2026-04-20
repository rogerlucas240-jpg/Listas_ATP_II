#include <stdio.h>
int verifica(int x){
    if(x == 1){
        return 1;
    }
    int count=0;
    for(int i=1;i<=x;i++){
        if(x % i == 0){
            count++;
        }
    }
    if(count == 2){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(verifica(x)){
            printf("%d eh primo\n",x);
        } else {
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}