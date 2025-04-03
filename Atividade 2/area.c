#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(int agrc, char* argv[]){

    char opcao;
    float raio, area, diagonal_menor, diagonal_maior, lado, base, altura, base_maior, base_menor;

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch (opcao){

        case 'c':
            printf("Circulo\n");
            printf("Digite o raio do circulo: ");
            scanf("%f", &raio);
            area = pi*pow(raio, 2);
            printf("A area do circulo eh: %.2f\n", area);
            break;

        case 'l':
            printf("Losango\n");
            printf("Digite a diagonal maior: ");
            scanf("%f", &diagonal_maior);
            printf("Digite a diagonal menor: ");
            scanf("%f", &diagonal_menor);
            area = (diagonal_maior*diagonal_menor)/2;
            printf("A area do losango eh: %.1f\n", area);
            break;

        case 'q':
            printf("Quadrado\n");
            printf("Digite o comprimento do lado: ");
            scanf("%f", &lado);
            area = pow(lado, 2);
            printf("A area do quadrado eh: %.1f\n", area);
            break;

        case 'r':
            printf("Retangulo\n");
            printf("Digite a base: ");
            scanf("%f", &base);
            printf("Digite a altura: ");
            scanf("%f", &altura);
            area = base*altura;
            printf("A area do retangulo eh: %.1f\n", area);
            break;

        case 't':
            printf("Triangulo\n");
            printf("Digite a base: ");
            scanf("%f", &base);
            printf("Digite a altura: ");
            scanf("%f", &altura);
            area = (base*altura)/2;
            printf("A area do losango eh: %.1f\n", area);
            break;

        case 'z':
            printf("Trapezio\n");
            printf("Digite a base maior: ");
            scanf("%f", &base_maior);
            printf("Digite a base menor: ");
            scanf("%f", &base_menor);
            printf("Digite a altura: ");
            scanf("%f", &altura);
            area = (base_maior + base_menor)*altura/2;
            printf("A area do trapezio eh: %.1f\n", area);
            break;

        default:
            printf("Opcao Invalida");
            area = 0;
            break;
    }
    printf("A = %.2f\n", area);
}