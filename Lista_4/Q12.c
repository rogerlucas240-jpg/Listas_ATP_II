#include <stdio.h>
int main(){
    int tam=0;
    char texto[100];
    scanf(" %99[^\n]",texto);

    for(int i=0;texto;i++){
       tam++;
    }
    printf("%d",tam);
    
    return 0;
}