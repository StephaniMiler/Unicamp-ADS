/* 2. Escreva um programa que leia dez números inteiros e imprima na
tela quantos destes números são pares e quantos são ímpares.*/ 

#include <stdio.h>

int main() {
    int numero; 
    int contador_pares = 0;
    int contador_impares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d.o numero inteiro: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            contador_pares++;
        } else {
            contador_impares++;
        }
    }

    printf("Entre os numeros digitados, %d sao pares e %d sao impares.\n", contador_pares, contador_impares);

    return 0;
}
