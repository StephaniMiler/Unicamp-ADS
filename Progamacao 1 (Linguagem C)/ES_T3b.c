/*Enunciado: Escreva	um	programa	que	leia	uma	data	no	formato	dd/mm/aaaa e	escreva	esta	
data	 com	 o	mês	expresso	por	extenso. Caso	 o	mês	 digitado	 não	 seja	válido	 (por	exemplo,
22/13/1980),	seu	programa	deverá	exibir	a	seguinte	mensagem:	"Mes	invalido" (sem	aspas	
e	acentos) e	encerrar a	execução. Imprima	sempre	uma	quebra	de	linha	ao	final	da	saída	do	
seu	programa.
Exemplos	de	entrada	(em	azul)	e	saída	(em	vermelho):
22/07/1980
22	de	julho	de	1980
22/17/2016
Mes	invalido*/ 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia, mes, ano;
    char* mes_extenso;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    switch(mes) {
        case 1:
            mes_extenso = "janeiro";
            break;
        case 2:
            mes_extenso = "fevereiro";
            break;
        case 3:
            mes_extenso = "março";
            break;
        case 4:
            mes_extenso = "abril";
            break;
        case 5:
            mes_extenso = "maio";
            break;
        case 6:
            mes_extenso = "junho";
            break;
        case 7:
            mes_extenso = "julho";
            break;
        case 8:
            mes_extenso = "agosto";
            break;
        case 9:
            mes_extenso = "setembro";
            break;
        case 10:
            mes_extenso = "outubro";
            break;
        case 11:
            mes_extenso = "novembro";
            break;
        case 12:
            mes_extenso = "dezembro";
            break;
        default:
            printf("Mes invalido\n");
            return 0;
    }

    printf("%02d de %s de %04d\n", dia, mes_extenso, ano);

    return 0;
}
