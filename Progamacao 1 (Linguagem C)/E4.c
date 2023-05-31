/* 4. Reescreva o programa do exercício 3 usando o comando switch.*/ 

#include <stdio.h>

int main() {
    int dia;
    int mes;
    int ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%d de ", dia);

    switch (mes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
        default:
            printf("um mes invalido");
            break;
    }

    printf(" de %d.\n", ano);

    return 0;
}
