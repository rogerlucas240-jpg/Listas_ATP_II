#include <stdio.h>
int main(){
    int ind=19;
    int v[20];
    for(int i=0;i<20;i++){
        scanf("%d",&v[i]);
    }
    for(int i=0;i<10;i++){
        int temp=0;
        temp=v[i];
        v[i]=v[ind];
        v[ind]=temp;
        ind--;
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,v[i]);
    }
    return 0;
}