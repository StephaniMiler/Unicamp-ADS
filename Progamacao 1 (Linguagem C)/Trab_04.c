/*Com o objetivo de introduzir alguns conceitos básicos de ChatBOTS, neste trabalho, você terá a oportunidade de construir seu
primeiro ChatBOT. Em primeiro lugar, você deve entender que todo algoritmo de ChatBOT funciona em duas etapas: treinamento e 
testes. Portanto, primeiro você deve treinar seu ChatBOT para que ele possa responder perguntas por conta própria. Depois, você
poderá testá-lo com diferentes opções. Para isso, você deverá construir um programa baseado em perguntas e respostas. Seu 
programa receberá como entrada: o tipo da pergunta, que será uma mensagem de texto, sendo INT para respostas com números inteiros
e FLOAT para respostas com números em ponto flutuante, a pergunta, uma string de no máximo 100 caracteres e três alternativas, 
que podem ser tanto números inteiros ou pontos flutuantes. Um ponto crucial é que, para simular um processo de aprendizado, você 
deverá deixar que o próprio programa aprenda qual a alternativa correta.*/

#include <stdio.h>
#include <string.h>

typedef struct{

    char type[6], perguntas[102];
    float alt_f[3], correta_f;
    int alt_i[3], correta_i; 
    char solucao[3];

} perguntass;

int main(){
    //Armazena as perguntas e respostas
    printf("---Etapa de treinamento---\n");

    perguntass questoes[5];
    int i=0;
    for (i = 0; i <= 5; i++){
        scanf("%s", questoes[i].type);
        getchar();

        if(strcmp(questoes[i].type, "FIM")==0)
            break;
        fgets(questoes[i].perguntas, 102, stdin);

        if(strcmp(questoes[i].type, "INT") == 0){
            for(int h=0; h<3; h++){
            scanf("%d", &questoes[i].alt_i[h]);
            }
            for(int h=0; h<3; h++){
                printf("Alternativa correta eh %d?\n", questoes[i].alt_i[h]);
                scanf("%s", questoes[i].solucao);

                if(strcmp(questoes[i].solucao, "SIM") == 0){
                    questoes[i].correta_i = questoes[i].alt_i[h]; 
                    break;
                }
            }
        }
        if(strcmp(questoes[i].type, "FLOAT") == 0){
            for(int h=0; h<3; h++){
                scanf("%f", &questoes[i].alt_f[h]);
            }
            for(int h=0; h<3; h++){
                printf("Alternativa correta eh %.2f?\n", questoes[i].alt_f[h]);
                scanf("%s", questoes[i].solucao);

                if(strcmp(questoes[i].solucao, "SIM") == 0){
                    questoes[i].correta_f = questoes[i].alt_f[h]; 
                    break;
                }
            }
        }
    }

    if (i == 6) {
        getchar(); 
    }

    //Verifica se a pergunta existe, caso sim responde conforme o treinamento
    printf("---Etapa de testes---\n");
    char p[102];
    
    while(strcmp(p, "FIM\n")!=0){

        fgets(p, 102, stdin);

        if(strcmp(p, "FIM\n")==0){
            break;
        }
        int encontrada = 0;

        for(int j=0; j<5; j++){
        if(strcmp(p, questoes[j].perguntas) == 0){
            if(strcmp(questoes[j].type, "INT") == 0){
                printf("A resposta eh: %d\n", questoes[j].correta_i);
                encontrada++;
                break;
            }
            if(strcmp(questoes[j].type, "FLOAT") == 0){
                printf("A resposta eh: %.2f\n", questoes[j].correta_f);
                encontrada++;
                break;
            }
        }
        }
        //Caso a pergunta não estiver cadastrada
        if(encontrada <1){
            
            printf("Me desculpe, ainda não fui treinado para responder essa perguntas.\n");
        }
    }
 return 0;
}