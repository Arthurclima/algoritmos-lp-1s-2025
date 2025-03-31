#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float base, altura, area;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    area = base*altura;
    printf("A area do retangulo eh: %.1f\n", area);


}