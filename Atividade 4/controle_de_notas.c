#include <stdio.h>

int main(int argc, char* argv[]){
    
    int alunos = 0;
    int i;
    printf("Insira a quantidade de alunos: \n");
    scanf("%d", &alunos);
    float notas [alunos];

        for (int i = 0; i < alunos; i++) {
            printf("Digite a nota do aluno %d: \n", i);
            scanf ("%f", &notas[i]);
         }
        for (i = 0; i < alunos; i++){
            printf("Nota aluno %d: %.2f \n", i, notas [i]);

        }

        


    return 0;
}