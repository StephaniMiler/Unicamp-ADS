/*Enunciado:	faça	 dois	 procedimentos que	 implementem	 a	soma e	 a	 multiplicação de	 dois	
números	complexos	z e	w.
Exemplos	de	entrada		e	saída:
3	4	+	5	6
8	+	10i*/

#include <stdio.h>
#include <math.h>

typedef struct{

    int num_real;
    int num_imaginario;

} num_complexo;

num_complexo soma(num_complexo x, num_complexo y){

    num_complexo soma;
    soma.num_real = x.num_real + y.num_real;
    soma.num_imaginario = x.num_imaginario + y.num_imaginario;
    return soma;

}

num_complexo multiplicacaoiplicacao(num_complexo x, num_complexo y){

    num_complexo multiplicacao;
    multiplicacao.num_real = (x.num_real * y.num_real) - (x.num_imaginario * y.num_imaginario);
    multiplicacao.num_imaginario = (x.num_real * y.num_imaginario) + (x.num_imaginario * y.num_real);
    return multiplicacao;

}

int main(){

    num_complexo x,  y, solucao;
    char sinal;

    scanf("%d %d %c %d %d", &x.num_real, &x.num_imaginario, &sinal, &y.num_real, &y.num_imaginario);

    if(sinal == '+'){
        solucao = soma(x, y);
    }
    if(sinal == '*'){
        solucao = multiplicacaoiplicacao(x, y);
    }

    printf("%d + %di\n", solucao.num_real, solucao.num_imaginario);
return 0;

}
