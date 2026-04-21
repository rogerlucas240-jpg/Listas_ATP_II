#include <stdio.h>
int main(){
    double n[12][12]={0};
    char op;
    scanf(" %c",&op);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&n[i][j]);
        }
    }

    double soma=0;
    int count=0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(j+i>11){
                soma+=n[i][j];
                count++;
            }
        }
    }

    switch(op){
        case('S'):
            printf("%.1lf\n",soma);
            break;
        case('M'):
            printf("%.1lf\n",soma/count);
    }
    return 0;
}