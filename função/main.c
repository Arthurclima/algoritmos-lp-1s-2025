#include <stdio.h>
#include <string.h>
#include "biblioteca.h"
#include <stdlib.h>

int main(int argc, char* argv[]){

    if(argc < 3){
        printf("Argumentos invalidos");
        return 1;
    }

    if (strcmp(argv[1], "-maior") == 0){
        if(argc != 4){
            printf("Argumentos invalidos");
            return 1;
        }

        int z = atoi(argv[1]);
        int x = atoi(argv[2]);
        printf("%d", maior_2n(x,z));

    }

     if (strcmp(argv[1], "-primo") == 0){
        if(argc != 3){
            printf ("Argumentos Invalidos");
            return 1;
        }

        int x = atoi(argv[2]);

     }
    
    return 0;
}