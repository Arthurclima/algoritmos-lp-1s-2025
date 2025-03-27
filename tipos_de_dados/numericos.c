#include <stdio.h>

int main (int argc, char* argv[]){
int idade;
float altura;
double peso;
double dobro_peso;
printf("Digite a idade:");
scanf ("%d", &idade);  
printf("A idade eh: %d\n", idade);
printf("Digite a altura:");
scanf("%f", &altura);
printf("A altura eh: %.2f\n", altura);    
printf("Digite o peso:");
scanf("%lf", &peso);
printf("O peso eh: %lf\n", peso);  
dobro_peso = 2.00 * peso;
scanf("%lf", &dobro_peso);
printf("O dobro do peso eh: %lf\n", dobro_peso);
    
    return 0;

}
