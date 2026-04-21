#include <stdio.h>
int main(){
    int x,p[5]={0},imp[5]={0};
    int pa=0,im=0;
    for(int i=0;i<15;i++){
        scanf("%d",&x);
        
        
        if(x % 2 == 0){
            p[pa]= x;
            pa++;
        } else {
            imp[im]= x;
            im++;
        }


        if(pa == 5){
            for(int j=0;j<5;j++){
                printf("par[%d] = %d\n",j,p[j]);
            }
            pa=0;
        } else if(im == 5){
            for(int j=0;j<5;j++){
                printf("impar[%d] = %d\n",j,imp[j]);
            }
            im=0;
        }
    }
    for(int i=0;i<im;i++){
        printf("impar[%d] = %d\n",i,imp[i]);
    }
    for(int i=0;i<pa;i++){
        printf("par[%d] = %d\n",i,p[i]);
    }
    
    return 0;
}