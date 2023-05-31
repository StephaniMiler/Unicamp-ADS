#include <stdio.h>

int main() {
    float nota[10];
    int faltas[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &nota[i]);

        printf("Digite o número de faltas do aluno %d: ", i+1);
        scanf("%d", &faltas[i]);

        if (nota[i] < 5 || faltas[i] > 16) {
            printf("Aluno %d reprovado.\n", i+1);
        } else {
            printf("Aluno %d aprovado.\n", i+1);
        }
    }

    return 0;
}
