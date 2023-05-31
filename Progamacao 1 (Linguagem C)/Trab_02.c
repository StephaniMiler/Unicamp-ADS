#include <stdio.h>

int main() {
    int N; 
    int P;
    int R;
    int somadivisores_N = 0;

    // Recebe os valores de N e P
    scanf("%d", &N);

    scanf("%d", &P);

    // Verifica se N é perfeito, abundante ou deficiente
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            somadivisores_N += i;
        }
    }
    if (somadivisores_N == N) {
        printf("N=%d eh um numero perfeito.\n", N);
    } else if (somadivisores_N > N) {
        printf("N=%d eh um numero abundante.\n", N);
    } else {
        printf("N=%d eh um numero deficiente.\n", N);
    }

    // Verifica se P é um divisor de N
    if (N % P == 0) {
        printf("P=%d eh um divisor de N=%d.\n", P, N);
    } else {
        printf("P=%d nao eh um divisor de N=%d.\n", P, N);
    }

    // Verifica se R é abundante, deficiente ou perfeito
    R = N - P;
    int somadivisores_R = 0;
    for (int i = 1; i < R; i++) {
        if (R % i == 0) {
            somadivisores_R += i;
        }
    }
    if (somadivisores_R == R) {
        printf("R=%d eh um numero perfeito.\n", R);
    } else if (somadivisores_R > R) {
        printf("R=%d eh um numero abundante.\n", R);
    } else {
        printf("R=%d eh um numero deficiente.\n", R);
    }

    return 0;
}
