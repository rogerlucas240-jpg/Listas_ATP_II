#include <stdio.h>

float media(float a,float b,float c){
    return (a+b+c)/3.0;
}

int main(){
    float a,b,c;
    scanf(" %f %f %f",&a,&b,&c);
    printf("A media e: %.2f\n",media(a,b,c));
    return 0;
}