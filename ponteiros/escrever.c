#include <stdio.h>
#define MAX_txt 256
/*
    Modos de abertura de arquivo
    'r' -> para leitura
    'w' -> criar/sobreescrever e escrever no arquivo
    'a' -> criar, se não existir, e adicionar ao final do arquivo    
*/


int main (int argc, char* argv[]){
    char texto [MAX_txt];
    FILE *arq = fopen(argv [1], "w");
        if (arq == NULL){
            printf ("erro ao abrir o arquivo");
            return 1;
        }
    fprintf(arq, argv [2]);
    
    fclose (arq);
}