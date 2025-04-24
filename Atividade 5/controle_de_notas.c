#include <stdio.h>

int main(int argc, char* argv[]){
    
    int i = 0;
    int alunos, ap, k, p;
    float soma, media, maxn = 10, minn = 0;
    printf("Insira a quantidade de alunos: \n");
    scanf("%d", &alunos);
    float notas [alunos];

        for (int i = 0; i < alunos; i++) 

            do{   
                printf("Digite a nota dos alunos %d: ", i+1);
                scanf("%f", &notas[i]);
                if(notas[i] < 0 || notas[i] > 10 ){
                    printf("notas invalidas por favor tente novamente.");
                }
                else{
                    if(notas[i] > maxn){
                        maxn = notas[i];
                    }
                    if(notas[i] < minn){
                        minn = notas[i];
                    }
                    if(notas[i] >= 6.0){
                        ap ++; 
                    }
                    soma += notas[i];
                }
            }while(notas[i] < 0 || notas[i] > 10);
        }
    
    media = soma/alunos;

    printf("\nMedia geral da turma eh: %f\n",media);
    printf("maior nota da turma eh: %f\n", maxn);
    printf("Menor nota da turma eh: %f\n",minn);
    printf("Numero de aprovados da turma eh: %d\n",ap);

    printf("Deseja saber a nota de um aluno especifico?\n1 - sim\n2 - nao\n");
    scanf("%d", &p);
    if(p == 1){
        printf("Qual aluno que deseja saber a nota? ");
        scanf("%d", &k);
        if(k < 1 || k > alunos){
            printf("Este aluno nao foi encontrado");
        }else{
            printf("A nota do aluno %d eh: %f", k, notas[k - 1]);
        }
    }
    if(p == 2){
        printf("tudo bem. caso precise, execute o codigo novamente.");
    }

         
        

        


    return 0;
}