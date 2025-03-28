#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[]){

    float n1, n2, soma, subtracao, divisao, multiplicacao, potencia, raiz_quadrada;


    printf("Digite o valor de n1: ");
    scanf("%f", &n1);

    printf("Digite o valor de n2: ");
    scanf("%f", &n2);

    // Adição
    soma = n1+n2;
    printf("%.1f + %.1f = %.1f\n", n1, n2, soma);
   
    // Subtração
    subtracao = n1-n2;
    printf("%.1f - %.1f = %.1f\n", n1, n2, subtracao);

    // Multiplicção
    multiplicacao = n1*n2;
    printf("%.2f*%.2f = %.2f\n", n1, n2, multiplicacao);

    // Divisão
    divisao = n1/n2;
    printf("%.2f/%.2f = %.2f\n", n1, n2, divisao);

    // Potenciação
    potencia = powf(n1, n2);
    printf("%.2f^%.2f = %.2f\n", n1, n2, potencia);

    // Radiciação
    raiz_quadrada = sqrt(n1);
    printf("%.2f^1/2 = %.2f\n", n1, raiz_quadrada);

    // Resto da Divisão
    int resto = (int) n1 % (int) n2;
    printf("%.0f %% %.0f = %d\n", n1, n2, resto);

    // Quociente da Divisão
     int quociente_inteiro = n1 / (int) n2;
    printf("%.2f // %.2f = %d\n", n1, n2, quociente_inteiro);

    // Incremento
    n1++;
    printf("%.2f++ = %2.f\n", n1-1, n1);

    // Decremento
    n1--;
    printf("%.2f-- = %2.f\n", n1+1, n1);

    return 0;
}