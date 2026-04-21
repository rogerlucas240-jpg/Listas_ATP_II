#include <stdio.h>
void fibo(int x){
    long long t0=0,t1=1,t;
    for(int i=2;i<=x;i++){
        t=t0 + t1;
        t0=t1;
        t1=t;
    }
    printf("Fib(%d) = %lld\n",x,t);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x == 0){
            printf("Fib(0) = 0\n");
        } else if(x == 1){
            printf("Fib(1) = 1\n");
        } else {
            fibo(x);
        }
    }
    return 0;
}