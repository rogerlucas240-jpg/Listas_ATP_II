#include <stdio.h>
int main(){
    double n[12][12]={0};
    int linha;
    char op;
    scanf("%d  %c",&linha,&op);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&n[i][j]);
        }
    }

    double soma=0;
    for(int j=0;j<12;j++){
        soma+=n[linha][j];
    }

    switch(op){
        case('S'):
            printf("%.1lf\n",soma);
            break;
        case('M'):
            printf("%.1lf\n",soma/12.0);
    }
    return 0;
}