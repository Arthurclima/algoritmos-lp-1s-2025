#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define max_txt 300

int main(int argc, char* argv[]){
    
    int numero_sorteado, i;
    int numeros[0];
    int numero_minimo = 0;
    int numero_maximo = 10;

    srand(time(NULL));
    for(i = 0; i < 1; i++){
        numero_sorteado = rand() %10;
        printf("O numero sorteado foi: %d\n", numeros[i]);
        printf("o numero minimo eh: %d\n", numero_minimo);
        printf("o numero maximo eh: %d\n", numero_maximo);
    }

        


    
    
    
    
    
    
    return 0;
}

