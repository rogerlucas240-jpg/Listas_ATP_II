#include <stdio.h>
int main(){
    int x,n[1000];
    scanf("%d",&x);
    for(int i=0;i<1000;i++){
        n[i]= i % x;
    }
    for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}