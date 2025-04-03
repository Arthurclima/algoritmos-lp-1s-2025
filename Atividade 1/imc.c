#include <stdio.h>
#include <math.h>
int main (int argc, char* argv[]){

float imc, peso, altura;
printf("Digite o peso: ");
scanf("%f", &peso);
printf("Digite a altura: ");
scanf("%f", &altura);
imc = peso /(altura*altura);
printf("O imc eh: %.2f\n", imc);

if (imc <= 18.5)  {
    printf("Classificacao: Abaixo do peso\n"); 
}
else if (imc > 18.5 && imc <= 24.9) {
    printf("Classificacao: Peso normal\n"); 
}
else if (imc > 24.9 && imc <= 29.9) {
    printf("Classificacao: Sobrepeso\n");
}
else if (imc > 29.9 && imc <= 34.9 ) {
    printf("Classificacao: Obesidade Grau 1\n");
}
else if (imc > 34.9 && imc <= 39.9) {
    printf("Classificacao: Obesidade Grau 2\n");
}
else {
    printf("Classificacao: Obesidade Grau 3 (morbida)\n");
}
}