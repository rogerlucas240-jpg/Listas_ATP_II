#include <stdio.h>
int poten(int base, int expo){
    if(expo == 0){
        return 1;
    } else {
        return base * poten(base,expo-1);
    }
}
int main(){
    int base,expo;
    printf("Informe a base e o expoente: \n");
    scanf(" %d %d",&base,&expo);
    printf("O numero %d elevado a %d eh igual: %d",base,expo,poten(base,expo));
    return 0;
}