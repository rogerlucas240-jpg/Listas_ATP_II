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
         if(str[i]== 'A' || str[i] == 'a'){
            str[i]='4';
        }
    }
    for(int i=0;i<tam;i++){
         if(str[i]== 'E' || str[i] == 'e'){
            str[i]='3';
        }
    }
    for(int i=0;i<tam;i++){
         if(str[i]== 'I' || str[i] == 'i'){
            str[i]='1';
        }
    }
    for(int i=0;i<tam;i++){
         if(str[i]== 'O' || str[i] == 'o'){
            str[i]='0';
        }
    }
    for(int i=0;i<tam;i++){
         if(str[i]== 'U' || str[i] == 'u'){
            str[i]='u';
        }
    }
    printf("%s\n",str);
    return 0;
}