/*:	Escreva	um	procedimento que	receba	dois	vetores	de	inteiros	A	e	B,	de	tamanho	
10,	e	armazene	em	B	o	cubo	de	cada	elemento	contido	em	A.	O	programa	principal	deve	ler	
os	dez	valores	de	A	e	exibir	os	valores	armazenados	em	B	após	a	chamada	do	procedimento.
O	 usuário	 digitará	 os	 elementos	 do	 vetor	 um	 de	 cada	 vez (um	 por	 linha).	 Na	 saída,	 o	
programa	 deverá imprimir	 os	 elementos	 do	 vetor	 B da	 mesma	 forma, seguido	 por	 uma
quebra	de	linha	ao	final	da	saída.*/

#include <stdio.h>

void calc_cubo(int elemento_a[], int elemento_b[], int tamanho) {
    
    for (int i = 0; i < tamanho; i++) {
        elemento_b[i] = elemento_a[i] * elemento_a[i] * elemento_a[i];
    }
}

int main() {

    int elemento_a[10];
    int elemento_b[10];

    // Ler os valores de A
    for (int i = 0; i < 10; i++) {
        scanf("%d", &elemento_a[i]);
    }


    calc_cubo(elemento_a, elemento_b, 10);


    for (int i = 0; i < 10; i++) {
        printf("%d\n", elemento_b[i]);
    }

    return 0;
}