/* 7. Escreva um programa que simule o funcionamento de uma
calculadora simples com quatro operações (+, -,* e /). Este
programa deverá ler os operandos e o operador, como
ilustrado abaixo, e exibir o resultado da operação (repetindo
os operandos e o operador fornecidos pelo usuário). Use
apenas comandos if-else.
• Ex. de entrada e saída:
• Entrada: 4 + 2
• Saída: 4 + 2 = 6.*/ 

#include <stdio.h>

int main() {
    float numero1;
    float numero2;
    float resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o operador (+, -, * ou /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    if (operador == '+') {
        resultado = numero1 + numero2;
    } else if (operador == '-') {
        resultado = numero1 - numero2;
    } else if (operador == '*') {
        resultado = numero1 * numero2;
    } else if (operador == '/') {
        resultado = numero1 / numero2;
    } else {
        printf("Operador inválido\n");
        return 0;
    }

    printf("%.2f %c %.2f = %.2f\n", numero1, operador, numero2, resultado);

    return 0;
}
