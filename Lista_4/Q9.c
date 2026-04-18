#include <stdio.h>
int main(){
    char str[100];
    int tam=0;
    int palindromo=0;
    scanf(" %99[^\n]",str);
    for(int i=0;str[i]!= '\0';i++){
        tam++;
    }
    for(int i=0;i < tam/2;i++){
        if(str[i] != str[tam-1-i]){
            palindromo=0;
            break;
        } else {
            palindromo=1;
        }
    }
    if(palindromo){
        printf("Eh palindromo.\n");
    } else {
        printf("Nao eh palindromo.\n");
    }
    return 0;
}