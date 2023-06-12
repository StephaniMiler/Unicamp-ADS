/*Estudos P2:
4- Um programa que lê um vetor char ou string*/

#include <stdio.h>

int main()
{ 
   char s[10];
   
   printf("Digite algo:\n");
   scanf("%9[^\n]s", s);
   fflush(stdin);
   
   printf("Resultado: %s\n", s);
   
   return 0;
}

