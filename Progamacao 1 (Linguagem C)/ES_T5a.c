#include <stdio.h>

int main() {
    float notas[20];
    int i;
    
    // lê as notas e as armazena no vetor notas
    for (i = 0; i < 20; i++) {
        scanf("%f", &notas[i]);
    }
    
    // busca as notas digitadas pelo usuário
    float nota;
    scanf("%f", &nota);
    while (nota >= 0) {
        int encontrou = 0;
        for (i = 0; i < 20; i++) {
            if (notas[i] == nota) {
                printf("existe\n");
                encontrou = 1;
                break;
            }
        }
        if (!encontrou) {
            printf("nao existe\n");
        }
        scanf("%f", &nota);
    }
    
    return 0;
}



