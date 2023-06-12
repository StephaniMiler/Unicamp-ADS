/* ES_T10c : Crie uma estrutura para armazenar os seguintes dados de um aluno: nome (string com
100 caracteres), ra (número inteiro), nota P1 e nota P2 (valores em ponto flutuante). Em seguida,
crie um programa que leia os dados de n alunos (n dado pelo usuário) e os armazene em um vetor
alocado dinamicamente. Por fim, seu programa deve percorrer o vetor armazenado e apresentar a
média de cada aluno, sendo uma por linha, no formato “RA Nome Média” (valores separados por um
‘\t’). A média deve ser apresentada com duas casas decimais.*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno {

    char nome[100];
    int ra;
    float P1;
    float P2;

};

float calcula_media(float P1, float P2) {
    return (P1 + P2) / 2;
}

int main() {

    int quant_alunos;

    // Armazena a quantidade de alunos, informada pelo usuário
    scanf("%d", &quant_alunos);

    struct Aluno* alunos = (struct Aluno*)malloc(quant_alunos * sizeof(struct Aluno));

    // Ler os dados dos alunos
    for (int i = 0; i < quant_alunos; i++) {
        // Nome do aluno
        scanf(" %[^\n]s", alunos[i].nome);
        // RA
        scanf("%d", &alunos[i].ra);
        // Nota P1
        scanf("%f", &alunos[i].P1);
        // Nota P2
        scanf("%f", &alunos[i].P2);
    }

    // Calcular e imprimir a média de cada aluno
    for (int i = 0; i < quant_alunos; i++) {

        float media_aluno = calcula_media(alunos[i].P1, alunos[i].P2);
        printf("%d\t%s\t%.2f\n", alunos[i].ra, alunos[i].nome, media_aluno);

    }

    // Libera a memória alocada
    free(alunos);

    return 0;
}