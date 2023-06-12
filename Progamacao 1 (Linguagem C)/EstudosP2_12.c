/*Estudos P2:
12- Faça um programa que receba a temperatura média de cada mês do ano (em
ordem) e as armazene em um vetor. Em seguida, este programa deve calcular e
exibir a maior e a menor temperatura média do ano e em que mês elas ocorreram.
O mês de ocorrência deve ser escrito por extenso.*/

#include <stdio.h>
#include <string.h>

#define MESES_ANO 12
#define MAX_TEMPERATURAS 100

// Função para retornar o nome do mês por extenso
char* nomeDoMes(int mes) {
    char* meses[MESES_ANO] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                              "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    return meses[mes-1];
}

int main() {
    float temperaturas[MAX_TEMPERATURAS];
    float menorTemperatura = 0, maiorTemperatura = 0;
    int mesMenorTemperatura = 0, mesMaiorTemperatura = 0;

    // Receber as temperaturas
    printf("Digite a temperatura média de cada mês do ano:\n");
    for (int i = 0; i < MESES_ANO; i++) {
        printf("Mês %d: ", i + 1);
        scanf("%f", &temperaturas[i]);

        // Verificar se é a menor temperatura até o momento
        if (i == 0 || temperaturas[i] < menorTemperatura) {
            menorTemperatura = temperaturas[i];
            mesMenorTemperatura = i + 1;
        }

        // Verificar se é a maior temperatura até o momento
        if (i == 0 || temperaturas[i] > maiorTemperatura) {
            maiorTemperatura = temperaturas[i];
            mesMaiorTemperatura = i + 1;
        }
    }

    // Exibir resultados
    printf("\nTemperatura média mais baixa: %.2f°C em %s\n", menorTemperatura, nomeDoMes(mesMenorTemperatura));
    printf("Temperatura média mais alta: %.2f°C em %s\n", maiorTemperatura, nomeDoMes(mesMaiorTemperatura));

    return 0;
}
