#include <stdio.h>

int main(int argc, char* argv[]){
    
    int qtdAlunos = 0;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    float notas[qtdAlunos];

    for(int i = 0; i < qtdAlunos; i++){
        do {
            printf("Digite a nota do aluno %d", i+1);
            scanf("%f", &notas [i]);
        } while (notas [i] > 10.0 || notas [i] < 0.0);
    }

    int posicaoNota

    printf("\nInforme a posicao da nota a ser apresentada: ");
    scanf("%d", &posicaoNota);

    float somanotas = 0.0;
    float medianotas = 0.0;
    float menorNota = notas[0];
    float maiorNota = notas [0];
    float qtdAlunosAprovados = 0;
    for(int i=0; i < qtdAlunos; i++) {
        somanotas += notas [i];

        if(menorNota > notas[i]){
            menorNota > notas[i];
        }
        if (maiorNota < notas [i]){
            maiorNota = notas[i]
        }
        if(notas[i] >= 6.0){
            qtdAlunosAprovados++;
        }
    }

    medianotas = somanotas / qtdAlunos;
    printf("\nmedia das notas: %.2f", medianotas);
    printf("\nmenor nota: %.2f", menorNota);
    printf("\nmaior nota: %.2f", maiorNota);
    printf("\nqtd. alunos aprovados: %d", qtdAlunosAprovados);
    printf("\nnota do aluno %d: %.2f", posicaoNota, notas[posicaoNota]);
    
    
    
    
    return 0;
}