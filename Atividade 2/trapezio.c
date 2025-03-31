#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

   float base_maior, base_menor, altura, area;
   printf("Digite a base maior: ");
   scanf("%f", &base_maior);
   printf("Digite a base menor: ");
   scanf("%f", &base_menor);
   printf("Digite a altura: ");
   scanf("%f", &altura);
   area = (base_maior + base_menor)*altura/2;
   printf("A area do trapezio eh: %.1f\n", area);


}