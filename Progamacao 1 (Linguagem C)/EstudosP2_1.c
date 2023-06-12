/*Estudos P2:
1- Código que receba um vetor de 5 posições e calcule a média de seus valores*/

#include <stdio.h>

int main()
{ 
    int v[5];
    float media;
    
    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;
    
    media = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;
    
    printf("Media: %.2f \n", media);

    return 0;
}
