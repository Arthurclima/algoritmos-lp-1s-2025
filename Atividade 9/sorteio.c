#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define max_txt 300

int main(int argc, char* argv[]){
    
    int numero_sorteado, i;

    srand(time(NULL));
    for(i = 0; i < 3; i++){
        numero_sorteado = rand() %10;
        printf("O numero sorteado foi: %d\n", numero_sorteado);
    }

        


    
    
    
    
    
    
    return 0;
}

