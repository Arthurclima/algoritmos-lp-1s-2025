#include <stdio.h>
#include <math.h>
int main () {

float imc, peso, altura;
printf("Digite o peso:");
scanf("%f", &peso);
printf("Digite a altura:");
scanf("%f", &altura);
imc = peso /(altura*altura);
printf("O imc eh: %.2f\n", imc);


}