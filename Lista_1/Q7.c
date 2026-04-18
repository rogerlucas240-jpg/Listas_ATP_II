#include <stdio.h>
void verifica(int n){
    if(n % 2 == 0){
        printf("Verdadeiro.\n");
    } else {
        printf("Falso.\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    verifica(n);
    return 0;
}