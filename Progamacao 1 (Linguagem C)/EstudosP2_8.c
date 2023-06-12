/*Estudos P2:
8- Um programa que utiliza struct para coletar 3 dados de cada pessoa cadastrada*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
        int idade;
        float peso;
        char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale (LC_ALL, "Portuguese");
    
    //Criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};
    printf("\nInicio\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n"  , pes.nome);
    
    //Atribuindo valores aos campos
    printf("Insira a idade: \n");
    scanf("%d", &pes.idade);
    printf("Insira o peso: \n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira o nome: \n");
    scanf("%s", &pes.nome);
    fflush(stdin);
    
    //Imprimindo resultados:
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
    
    return 0;
    
}
    

