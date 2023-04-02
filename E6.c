/* Em um determinado semestre de um curso foram aplicadas três
provas com pesos iguais. Escreva um programa que leia estas três
notas e exiba a média do aluno e seu status no curso:
• Se as três notas forem maiores ou iguais a 6.0, o aluno está
aprovado;
• Se uma das notas for inferior a 2.0, o aluno está reprovado.
• Caso contrário, o aluno deveria ter feito exame e sua média será
dada pela soma da média das provas com a nota do exame dividida
por dois. O programa deve ler a nota do exame neste caso. A
aprovação ocorrerá se a média for maior ou igual a 5.0.*/ 

#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    if (nota1 < 2.0 || nota2 < 2.0 || nota3 < 2.0) { // se uma das notas é menor que 2.0
        printf("Reprovado\n");
    } else if (media >= 6.0) { // se a média é maior ou igual a 6.0
        printf("Aprovado\n");
    } else { // se a média é menor que 6.0 e não há nota menor que 2.0
        float nota_exame, media_exame;
        printf("Digite a nota do exame: ");
        scanf("%f", &nota_exame);

        media_exame = (media + nota_exame) / 2.0;

        if (media_exame >= 5.0) { // se a média com o exame é maior ou igual a 5.0
            printf("Aprovado com exame\n");
        } else { // se a média com o exame é menor que 5.0
            printf("Reprovado\n");
        }
    }

    return 0;
}
