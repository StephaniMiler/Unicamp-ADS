/*Enunciado: Escreva um programa que leia uma string qualquer (máximo 80 caracteres) e
imprima na tela a sua versão espelhada, ou seja, a mesma string  mas com a ordem dos
caracteres invertida. */

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[81]; 
    char palavra2;
    int i, j;

   scanf("%80[^\n]", palavra);

    j = strlen(palavra) - 1;
    for (i = 0; i < j; i++, j--) {
        palavra2 = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = palavra2;
    }

    printf("%s\n", palavra);

    return 0;
}




