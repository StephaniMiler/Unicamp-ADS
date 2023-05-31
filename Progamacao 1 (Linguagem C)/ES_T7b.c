/*Enunciado: Faça um programa que teste se uma palavra é um palíndromo, ou seja, se ela
pode ser lida da mesma forma tanto na ordem correta quanto na ordem invertida. Este
programa não pode ser sensível a letras maiúsculas, ou seja, por exemplo, ele deve indicar
que “Arara” é um palíndromo.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[81];
    int i, j, tam, palindromo;

    // Lê a palavra
    scanf("%s", palavra);

    tam = strlen(palavra);
    palindromo = 1;

    // Faz com que não seja sensível a letras maiúsculas
    for (i = 0; i < tam; i++) {
        palavra[i] = tolower(palavra[i]); 
    }

    // Testa se a palavra é um palíndromo
    for (i = 0, j = tam - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("Esta palavra e um palindromo\n");
    } else {
        printf("Esta palavra nao e um palindromo\n");
    }

    return 0;
}


