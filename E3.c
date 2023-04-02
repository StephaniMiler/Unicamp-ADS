/* 3. Escreva um programa que leia uma data no formato dd/mm/aaaa
e escreva esta data com o mês por extenso (utilize apenas
comandos if-else para comparações):
• Ex.:
• Entrada: 22/07/1980
• Saída: 22 de julho de 1980.*/ 

#include <stdio.h>

int main() {
    int dia;
    int mes; 
    int ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%d de ", dia);

    if (mes == 1) {
        printf("janeiro");
    } else if (mes == 2) {
        printf("fevereiro");
    } else if (mes == 3) {
        printf("marco");
    } else if (mes == 4) {
        printf("abril");
    } else if (mes == 5) {
        printf("maio");
    } else if (mes == 6) {
        printf("junho");
    } else if (mes == 7) {
        printf("julho");
    } else if (mes == 8) {
        printf("agosto");
    } else if (mes == 9) {
        printf("setembro");
    } else if (mes == 10) {
        printf("outubro");
    } else if (mes == 11) {
        printf("novembro");
    } else if (mes == 12) {
        printf("dezembro");
    } else {
        printf("um mes invalido");
    }

    printf(" de %d.\n", ano);

    return 0;
}
