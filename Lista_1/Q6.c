#include <stdio.h>
void aprovacao(float media){
    if(6 <=(media)){
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }
}
int main(){
    float media;
    scanf(" %f",&media);
    aprovacao(media);
    return 0;
}