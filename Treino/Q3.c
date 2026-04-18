#include <stdio.h>
#include <math.h>

double perim(double raio,double PI){
    return 2 * PI * raio;
}

double area(double PI,double raio){
   return PI * pow(raio, 2);
}

void inicio(){
    printf("Bem-vindo ao Area & Perimeter Calculator Plus\n\n");
    printf("Informe o raio da circunferencia em cm: ");
}

void final(double raio,double PI){
    printf("O circulo de raio %.2lf cm possui: \n", raio);
    printf("\t - Area = %.2lf cm ^2\n", area(PI,raio));
    printf("\t - Perimetro = %.2lf cm\n", perim(raio,PI));
}

const double PI = 3.14159;

int main(){
    double raio;
    inicio();
    scanf("%lf", &raio);
    final(raio,PI);
    return 0;
}