/*8. Reescreva o programa do exercício 7 usando apenas o
operador switch.*/ 

#include <stdio.h>

int main() {
    float numero1;
    float numero2;
    float resultado;
    char  operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o operador (+, -, * ou /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            resultado = numero1 / numero2;
            break;
        default:
            printf("Operador inválido\n");
            return 0;
    }

    printf("%.2f %c %.2f = %.2f\n", numero1, operador, numero2, resultado);

    return 0;
}
