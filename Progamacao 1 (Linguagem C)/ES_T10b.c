/* ES_T10b : Implemente um programa que leia o número de linhas e colunas de uma matriz,
seguidos dos valores desta matriz (inteiros), e indique se a matriz é simétrica ou não. Os dados da
matriz serão fornecidos linha à linha, ou seja, primeiro será preenchida a primeira linha, depois a
segunda e assim por diante. Seu programa deve usar alocação dinâmica para armazenar a matriz.
Observações:
• Caso a matriz seja simétrica, deve ser impressa a mensagem: “Eh simetrica”;
• Caso contrário, a mensagem: “Não eh simetrica”;
• Todas as mensagem devem ser seguidas de uma quebra de linha.*/

#include <stdio.h>
#include <stdlib.h>

void simetria_matriz(int **matriz, int linhas, int colunas) {
    
    int i, j; //linhas e colunas

    // Verifica se a matriz é simétrica
    for (i = 0; i < linhas; i++) {
        
        for (j = i + 1; j < colunas; j++) {
            
            // Se os elementos da matriz não forem iguais aos seus correspondentes inversos, não é simétrica
            if (matriz[i][j] != matriz[j][i]) {
                
                printf("Nao eh simetrica\n");
                return;
                
            }
        }
    }

    //Caso os elementos da matriz forem iguais aos seus correspondentes inversos, é simétrica
    printf("Eh simetrica\n");
}

int main() {
    
    int i, j;
    int linhas, colunas;
    int **matriz;

    // Leitura do número de linhas e colunas da matriz
    scanf("%d %d", &linhas, &colunas);

    // Aloca memória para a matriz
    matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        
        //Para evitar o erro tamanho máximo da pilha ou da memória dinâmica excedido
        printf("Erro ao alocar memória\n");
        return 1;
    }

    // Aloca memória para cada linha da matriz
    for (i = 0; i < linhas; i++) {
        
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória\n");
            return 1;
        }
    }

    // Leitura dos valores da matriz
    for (i = 0; i < linhas; i++) {
        
        for (j = 0; j < colunas; j++) {
            
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verifica e imprime o resultado
    simetria_matriz(matriz, linhas, colunas);

    // Libera memória
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
