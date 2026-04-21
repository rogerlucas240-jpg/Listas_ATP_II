#include <stdio.h>
void verifica(float v[]){
    for(int i=0;i<100;i++){
        if(v[i]<= 10){
            printf("A[%d] = %.1f\n",i,v[i]);
        }
    }
}
int main(){
    float v[100];
    for(int i=0;i<100;i++){
        scanf("%f",&v[i]);
    }
    verifica(v);
    return 0;
}