/*Estudos P2:
5- Um programa que lê um vetor char ou string utilizando fgets*/

#include <stdio.h>

int main()
{ 
   char s[10];
   
   printf("Digite algo:\n");
   fgets(s, 10, stdin);
   fflush(stdin);
   
   puts("Resultado:");
   puts(s);
   
   return 0;
}

