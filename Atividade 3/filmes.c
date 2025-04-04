#include <stdio.h>

int main(int argc, char* argv[]){
    
    char opcao, opcao_2, C;
    printf("Escolha uma opcao de filme: \n");
    printf("L - Leve\n");
    printf("I - Intenso\n");
    scanf ("%c", &opcao);
        if ('L') {

            printf("Voce escolheu um filme leve!\n");
            printf("Escolha o genero do filme leve:\n");
            printf("C - Comedia\n");
            scanf("%c", &C);
            printf("A - Animacao\n");
            scanf("%c", &opcao_2);

        } else if (C == opcao_2) {
           
            printf("Assista: As Branquelas!");

        }
            

        
        
        










}