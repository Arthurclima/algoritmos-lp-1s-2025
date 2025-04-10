#include <stdio.h>

int main(int argc, char* argv[]){
    
    int opcao, opcao_2, opcao_3;
    printf("Escolha uma opcao de filme: \n");
    printf("1 - Leve\n");
    printf("2 - Intenso\n");
    scanf ("%d", &opcao);
        if (opcao == 1){
            printf("Voce escolheu um filme leve!\n");
            printf("Escolha um genero de filme: \n");
            printf("1 - Comedia\n");
            printf("2 - Animacao\n");
            scanf("%d", &opcao_2);
                if (opcao_2 == 1){
                    printf("Voce escolheu Comedia! \n");
                    printf ("Filme recomendado: As branquelas. \n");
            
         }      else if (opcao_2 == 2){
                    printf("Voce escolheu Animacao! \n");
                    printf("Filme recomendado: Toy Story. \n");

         }      else {
                    printf("Opcao invalida! \n");

         }


     }  else if (opcao == 2){
            printf("Voce escolheu um filme intenso! \n");
            printf("Escolha um genero de filme: \n");
            printf("1 - Acao\n");
            printf("2 - Terror\n");
            scanf("%d", &opcao_2);
                if (opcao_2 == 1)
            {
                    printf("Voce escolheu Acao! \n");
                    printf("Escolha o subgenero do filme: \n");
                    printf("1 - Super-Heroi\n");
                    printf("2 - Aventura Realista\n");
                    scanf ("%d", &opcao_3);
                        if (opcao_3 == 1){
                            printf("Voce escolheu Super-Heroi!\n");
                            printf("Filme recomendado: Vingadores Ultimato. \n");
                    }   else if(opcao_3 == 2){
                            printf("Voce escolheu Aventura Realista!\n");
                            printf("Filme recomendado: Mad Max Estrada Furia. \n");
                    }   else {
                        printf("Opcao Invalida! \n");
                    }

            }   else if (opcao_2 == 2){
                printf("Voce escolheu Terror! \n");
                printf("Escolha o subgenero do filme: \n");
                printf("1 - Terror Psicologico\n");
                printf("2 - Terror Sobrenatural\n");
                scanf ("%d", &opcao_3);
                    if (opcao_3 == 1){
                        printf("Voce escolheu Terror Psicologico!\n");
                        printf("Filme recomendado: Corra!. \n");
                }   else if(opcao_3 == 2){
                        printf("Voce escolheu Terror Sobrenatural!\n");
                        printf("Filme recomendado: Invocacao do Mal. \n");
                }   else {
                    printf("Opcao Invalida! \n");
                }
            }
                




     } else {
        printf("Opcao Invalida! \n");
     }

    
    return 0;   
        


}

