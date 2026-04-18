#include <stdio.h>
int main(){
    char str[100];
    int vogal=0;
    scanf(" %99[^\n]",str);
    int tam=0;
    for(int i=0;str[i] != '\0';i++){
        tam++;
    }
    for(int i=0;i<tam;i++){
         if(str[i] == 'a' || str[i] == 'A' ||str[i] == 'e' || str[i] == 'E' ||str[i] == 'i' || str[i] == 'I' ||str[i] == 'o' || str[i] == 'O' ||str[i] == 'u' || str[i] == 'U'){
            vogal++;
        }
    }
    printf("%d\n",vogal);
    return 0;
}