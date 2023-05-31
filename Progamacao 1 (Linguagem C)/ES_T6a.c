#include <stdio.h>

/*Enunciado: Escreva	 um	 programa	 que	 receba	 do	 usuário	 as	 dimensões	 NUM_LIM	 e	
NUM_COL (máximo	 20)	 e	 os	 dados	 de	 uma	 matriz	 bidimensional,	 e	 imprima	 a	 matriz	
transposta	na	tela.*/

int main() {
    
    int num_lin, num_col, i, j;

    // Recebe as dimensões da matriz
    scanf("%d %d", &num_lin, &num_col);

    // Monta a matriz bidimensional
    int matriz[num_lin][num_col];
    for (i = 0; i < num_lin; i++) {
        for (j = 0; j < num_col; j++) {
            int num;
            scanf("%d", &num);
            matriz[i][j] = num;
        }
    }

    // Monta a matriz transposta
    int resultado[num_col][num_lin];
    for (j = 0; j < num_col; j++) {
        for (i = 0; i < num_lin; i++) {
            int num = matriz[i][j];
            resultado[j][i] = num;
        }
    }

    // Imprime matriz transposta
    for (i = 0; i < num_col; i++) {
        for (j = 0; j < num_lin; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
