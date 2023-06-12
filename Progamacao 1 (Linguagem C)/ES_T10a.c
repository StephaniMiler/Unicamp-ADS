/* Implemente um programa que faça a avaliação de polinômios de um grau qualquer.
Este programa deve:
1. Ler o grau do polinômio (número inteiro);
2. Ler os coeficientes do polinômio (pontos flutuantes, fornecidos do menor para o maior grau)
e armazená-los em um vetor dinamicamente alocado, de tamanho adequado ao grau do
polinômio.
3. Ler o valor de 𝑥 (ponto flutuante) e retornar o valor resultante.
Por exemplo, o polinômio 3𝑥
2 + 2𝑥 + 12 tem grau 2 e vetor de coeficientes v[] = {12, 2, 3}.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double avaliar_polinomio(double x, int grau_p, double* coeficientes) {
    
    double resultado = 0;
    int i;

    for (i = 0; i <= grau_p; i++) {
        resultado += coeficientes[i] * pow(x, grau_p - i);
    }

    return resultado;
}

int main() {
    
    int grau_p, i;
    double *coeficientes, x, resultado;

    // Lê o grau do polinômio
    scanf("%d", &grau_p);

    // Aloca o vetor de coeficientes
    coeficientes = (double*) malloc((grau_p + 1) * sizeof(double));

    // Lê os coeficientes
    for (i = grau_p; i >= 0; i--) {
        scanf("%lf", &coeficientes[i]);
    }

    // Lê o valor de x
    scanf("%lf", &x);

    // Avalia o polinômio
    resultado = avaliar_polinomio(x, grau_p, coeficientes);

    // Imprime o resultado
    printf("%.2lf\n", resultado);

    // Libera a memória alocada
    free(coeficientes);

    return 
    0;
}