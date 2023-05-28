/*	faça	 um	 procedimento que	 receba	 como	 parâmetros	 um	 matriz	 de	 inteiros	 de	
tamanho	N	e	retorne	o	menor e	o	maior elemento	do	matriz.	O	procedimento	não	deve	ler	
nada	do	teclado nem	mostrar	nada	na	tela.	Também	não	deve	receber	nenhum	parâmetro	
adicional.
A	função main()	deve testar	o	procedimento,	sendo	responsável	(i) pela	leitura	do	tamanho
do	 matriz,	 (ii) pela	 leitura	 dos	 elementos	 do	 matriz,	 (iii) pela	 chamada	 do	 procedimento	 de	
busca	e	(iv) pela	exibição	do	maior	e	do	menor	valor	encontrado (esta	saída	deve	ser	seguida	
de	uma	quebra	de	linha).
Exemplos	de	entrada	(em	azul)	e	saída	(em	vermelho):
3
1
2
4
maior	valor:	4
menor	valor:	1*/

#include <stdio.h>

void encontra_maior_menor(int matriz[], int tamanho, int *maior, int *menor) {
    
    *maior = matriz[0];
    *menor = matriz[0];

    for (int i = 1; i < tamanho; i++) {
        
        if (matriz[i] > *maior) {
            *maior = matriz[i];
        }

        if (matriz[i] < *menor) {
            *menor = matriz[i];
        }
    }
}

int main() {
    
    int N;

    scanf("%d", &N);

    int matriz[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &matriz[i]);
    }

    int maior, menor;
    encontra_maior_menor(matriz, N, &maior, &menor);

    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);

    return 0;
}