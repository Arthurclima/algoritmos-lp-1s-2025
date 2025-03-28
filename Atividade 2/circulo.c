#include <stdio.h>
#include <math.h>
#define pi 3.14
int main(int argc, char* argv[]){

double raio, area;
printf("Digite o raio do circulo: ");
scanf("%lf", &raio);
area = pi*pow(raio, 2);
printf("A area do circulo eh: %.2lf\n", area);


}