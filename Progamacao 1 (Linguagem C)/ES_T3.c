/*Enunciado: Escreva	um	programa	que	simule	o	funcionamento	de	uma	calculadora	simples	
com	quatro	operações	(+,-,*e	/).	Este	programa	deverá	ler	os	operandos e	o	operador,	como	
ilustrado	 abaixo e	 exibir	 o	 resultado	 da	 operação	 (repetindo	 os	 operandos	 e	 o	 operador	
fornecidos	pelo	usuário).	Implemente	as	verificações	condicionais apenas	com	comandos	ifelse. Você	 deve	 supor que	 os	 números	 que	 serão	 inseridos	 nessa	 calculadora	 terão,	 no	
máximo,	3 casas	depois	da	vírgula,	portanto,	a	saída	do	seu	programa	deve	mostrar	tanto	os	
operandos	 como	 o	 resultado	 da	 operação	 com	 3	 casas	 decimais.	 Além	 disso,	 os	 números	
serão	inseridos	sem	espaço	entre	os	operandos	e	o	operador,	e	a	saída deve	 ter	o	mesmo	
formato.
Caso	 o	 operador	 inserido	 não	 seja	 válido,	 seu	 programa	 deverá	 mostrar	 a mensagem	
"Operador	 invalido" (sem	 acentos	 e	 aspas) e	 encerrar a	 execução. Sempre	 coloque	 uma	
quebra	de	linha	ao	final	da	saída	de	seu	programa*/ 

#include <stdio.h>

int main() {
    float numero1;
    float numero2;
    float resultado;
    char operador;

    printf("Digite os operandos e o operador (+, -, * ou /), sem espaço entre eles: ");
    scanf("%f%c%f", &numero1, &operador, &numero2);

    if (operador == '+') {
        resultado = numero1 + numero2;
    } else if (operador == '-') {
        resultado = numero1 - numero2;
    } else if (operador == '*') {
        resultado = numero1 * numero2;
    } else if (operador == '/') {
        if (numero2 == 0) {
            printf("Operacao invalida\n");
            return 0;
        }
        resultado = numero1 / numero2;
    } else {
        printf("Operador invalido\n");
        return 0;
    }

    printf("%.3f %c %.3f = %.3f\n", numero1, operador, numero2, resultado);

    return 0;
}
