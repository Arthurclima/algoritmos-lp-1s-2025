#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>

int main(int argc, char* argv[]){
    int z = atoi(argv[1]);
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);

    if(argc != 3 && argc != 4){
            printf("Informe 2 ou 3 argumentos.");
            return 1;
    }
    if (argc == 3){
            printf("menor (%d, %d): %d", x, z, maior_2n(x,z));
    }else{
            printf("menor (%d, %d, %d): %d", x, y, z, maior_3n(x, y, z));
    }
    return 0;