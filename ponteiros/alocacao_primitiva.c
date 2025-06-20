#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    typedef struct Ponto
    {
        int x;
        float y;
    } Ponto;
    

    int qtd_linhas = 0;
    int x;
    float y;
    Ponto *numeros;

    FILE *arq = fopen("dados_regressao.csv", "r");

    if (arq == NULL){
        printf("Erro ao abrir arquivo.");
        return 1;
    }
    while (fscanf(arq, "%d,%f", &x, &y) != EOF){
        qtd_linhas++;
    }   

    numeros = malloc(sizeof(float) * qtd_linhas);
    
    if(numeros != NULL){
        int i = 0;
        fseek(arq, 0, SEEK_SET);
        while (fscanf(arq, "%f", &x, &y) != EOF){
        numeros[i].x = x;
        numeros[i].y = y;
        i++;
    }   
    }

    for (int i = 0; i < qtd_linhas; i++){
        printf("%d, %f\n", numeros[i].x, numeros[i].y);
    }
        printf("quantidade de linhas: %d\n", qtd_linhas);

    fclose(arq);

    return 0;

}