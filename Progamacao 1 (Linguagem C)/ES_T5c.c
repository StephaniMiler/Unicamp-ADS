#include <stdio.h>


int main() {
    int vetor1[10], vetor2[10], vetorResultado[20];
    int x, y, z;

    // Preenchendo o primeiro vetor
    for (x = 0; x < 10; x++) {
        scanf("%d", &vetor1[x]);
    }

    // Preenchendo o segundo vetor
    for (x = 0; x < 10; x++) {
        scanf("%d", &vetor2[x]);
    }

    // Intercalando os vetores
    x = 0;
    y = 0;
    z = 0;
    while (x < 10 && y < 10) {
        vetorResultado[z++] = vetor1[x++];
        vetorResultado[z++] = vetor2[y++];
    }
    while (x < 10) {
        vetorResultado[z++] = vetor1[x++];
    }
    while (y < 10) {
        vetorResultado[z++] = vetor2[y++];
    }

    // Exibindo o vetor resultante
    for (x = 0; x < 2*10; x++) {
        printf("%d", vetorResultado[x]);
        printf("|");
    }
    printf("\n");

    return 0;
}