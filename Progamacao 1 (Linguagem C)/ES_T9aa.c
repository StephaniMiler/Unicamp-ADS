/*Escreva um programa que receba o valor do raio de uma esfera e retorne o seu
volume. O cálculo do volume da esfera deve ser feito em uma função chamada
“volume_esfera” definida antes da função main().*/

#include <stdio.h>
#define PI 3.14159


double volume_esfera(double raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main() {
    
    double vol;
    double raio;
    
    scanf("%lf", &raio);

    vol = volume_esfera(raio);

    printf("%.2lf\n", vol);

    return 0;
}
