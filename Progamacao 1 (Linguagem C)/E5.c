/* 5. Escreva um programa que leia um caractere do teclado, fornecido
pelo usuário, e imprima na tela:
• O caractere em letra maiúscula, caso ele esteja em letra minúscula;
• O próprio caractere, caso contrário.*/ 

#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (islower(caractere)) { // se o caractere é minúsculo
        caractere = toupper(caractere); // converte para maiúsculo
    }

    printf("Caractere: %c\n", caractere);

    return 0;
}
