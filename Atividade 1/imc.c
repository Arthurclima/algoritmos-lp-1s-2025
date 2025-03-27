#include <stdio.h>
#include <math.h>
int main () {

double imc, peso, altura;
printf("Digite o peso:");
scanf("%lf", &peso);
printf("Digite a altura:");
scanf("%lf", &altura);
imc = peso /(altura*altura);
printf("O imc eh: %.2lf\n", imc);


}