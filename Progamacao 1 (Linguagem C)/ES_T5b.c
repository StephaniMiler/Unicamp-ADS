#include <stdio.h>

int main() {
    int quantidade[10];
    float valor[10];
    int total_produtos = 0;
    float faturamento = 0.0;

    // Recebe a quantidade vendida de cada produto
    for (int i = 0; i < 10; i++) {
        scanf("%d", &quantidade[i]);
        total_produtos += quantidade[i];
    }

    // Recebe o valor unitário de cada produto
    for (int i = 0; i < 10; i++) {
        scanf("%f", &valor[i]);
        faturamento += quantidade[i] * valor[i];
    }

    // Exibe o faturamento e a quantidade total de produtos vendidos
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", faturamento, total_produtos);

    return 0;
}

