#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float diagonal_maior, diagonal_menor, area;
    printf("Digite a diagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("Digite a diagonal menor: ");
    scanf("%f", &diagonal_menor);
    area = (diagonal_maior*diagonal_menor)/2;
    printf("A area do losango eh: %.1f\n", area);




    
}