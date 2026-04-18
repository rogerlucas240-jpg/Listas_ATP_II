#include <stdio.h>
void dobro(int *n){
    *n=(*n)*2;
}
int main(){
    int n;
    scanf("%d",&n);
    dobro(&n);
    printf("%d\n",n);
    return 0;
}