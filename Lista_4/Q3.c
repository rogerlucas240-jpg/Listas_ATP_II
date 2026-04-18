#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("Valore pares lidos: \n");
    for(int i=0;i<n;i++){
        if(num[i] % 2 == 0){
            printf("%d\n",num[i]);
        }
    }
    return 0;
}