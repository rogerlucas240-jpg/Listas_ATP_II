#include <stdio.h>
void altera(char pala[]){
    pala[0]='X';
    puts(pala);
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char pala[n+1];
    fgets(pala,n+1,stdin);
    altera(pala);
    return 0;
}