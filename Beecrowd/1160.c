#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        
        long long pa,pb;
        int count=0;
        double ga,gb;
        
        scanf("%lld %lld %lf %lf",&pa,&pb,&ga,&gb);
        
        while(pa<=pb){
            pa=pa +(long long)(pa * ga / 100);
            pb=pb + (long long)(pb * gb / 100);
            count++;
            if(count > 100){
                break;
            }
        }
        if(count > 100){
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n",count);
        }
    }
    return 0;
}