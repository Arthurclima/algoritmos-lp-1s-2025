#include <stdio.h>
#include <string.h>
#define TAM 255

int main(int argc, char* argv[]){
    //Declaração de strings
    char palavra1[] = "conhecimento";
    char palavra2[] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'};
    char frase1 [TAM];
    char palavra3 [TAM];
    char palavra4 [TAM];
    printf("%s\n", palavra1);
    printf("%s\n", palavra2);
    
    printf("palavra2[4] = %c\n", palavra2[4]);

     printf("Digite uma frase: ");
     fflush(stdin);
    fgets(frase1, TAM, stdin);
    

    printf("%s\n", frase1);

     printf("Digite uma palavra: ");
     fflush(stdin);
    fgets(palavra3, TAM, stdin);

    printf("Digite outra palavra: ");
     fflush(stdin);    
    fgets(palavra4, TAM, stdin);

    if (strcmp(palavra3, palavra4) == 0){
        printf("As palavras sao iguais\n");
    }
    else {
        printf("As palavras NAO sao iguais\n");
    }

    printf("Tamanho da palavra eh: %d\n", strlen(palavra3));

    for (int i = 0; i < strlen(palavra3); i++){
        printf("%c\n", palavra3[i]);
    }

    //imprime a palavra 3 ao contrário

    for (int i = strlen(palavra3) - 1; i >= 0; i--){
        printf("%c\n", palavra3[i]);
    }

    //concatena palavra
    strcat(palavra3, palavra4);
    printf("Palavra 3 concatenada = %s\n", palavra3);
    return 0;
}