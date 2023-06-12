/*Estudos P2:
2- Código que receba um vetor de 5 posições e calcule a média de seus valores de forma mais enxuta*/

#include <stdio.h>

int main()
{ 
    int v[5] = {10, 20, 30, 40, 50} ;
    int i;
    float s=0;
    
   for(i=0; i<5; i++){
       s+=v[i];
   }
    
    printf("Media: %.2f \n", s/5);

    return 0;
}
