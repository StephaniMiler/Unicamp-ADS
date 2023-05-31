#include <locale.h>
#include <stdio.h>
#include <string.h>

#define tam_pergunta 100

typedef struct {

    char tipo_resposta[5];
    char questao[tam_pergunta];
    float resposta;
} Perguntas;

int main(){

    setlocale(LC_ALL, "en_US.UTF-8");
    char tp_resposta_perg[6];
    float alts[3];
    int i;
    int num_perg = 0; 
    int treinamento = 0;
    Perguntas pergunta[10];  

    printf("---Etapa de treinamento---\n");

    while(treinamento == 0){
    
        scanf("%s", tp_resposta_perg);  
        if (strcmp(tp_resposta_perg, "FIM") == 0){
            treinamento = 1;
            break;
        }
        strcpy(pergunta[num_perg].tipo_resposta, tp_resposta_perg);   
       
        scanf(" %[^\n]s", pergunta[num_perg].questao);

       
        for(i=0; i<3; i++){     
            scanf("%f", &alts[i]);
        }

        int resp_certa = 0;
        char sn[5] = "";
        i = 0;
        while(resp_certa == 0){     
            if(strcmp(tp_resposta_perg, "INT") == 0){
                printf("Alternativa correta eh %.0f?\n", alts[i]);
            }
            else{
                printf("Alternativa correta eh %.2f?\n", alts[i]);
            }
            scanf("%s", sn);
            if(strcmp(sn, "SIM") == 0){
                resp_certa = 1;
                pergunta[num_perg].resposta = alts[i];
                break;
            }
            else{
                i++;
            }
        }
        num_perg++;
    }

    printf("---Etapa de testes---\n");
    char perg_chat[tam_pergunta] = "";
    int fim = 0;

    while(fim == 0){

        int quest_valida = 0;
        scanf(" %[^\n]s", perg_chat);
        if (strcmp(perg_chat, "FIM") == 0){
            break;
        }
        for(i=0; i<num_perg; i++){   
            if(strcmp(perg_chat, pergunta[i].questao) == 0){
                if (strcmp(pergunta[i].tipo_resposta, "INT") == 0){
                    printf("A resposta eh: %.0f\n", pergunta[i].resposta);
                }
                else{
                    printf("A resposta eh: %.2f\n", pergunta[i].resposta);
                }
                quest_valida = 1;
            }
        }
        if (quest_valida == 0){
            printf("Me desculpe, ainda não fui treinado para responder essa pergunta.\n");
        }
   
