/*Estudos P2:
9- Um programa que utiliza modularização para encontrar o maior valor em 2 números*/

#include <stdio.h>

float maior(float num1, float num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main(){
    float x, y, m;
    printf("Insira um valor: \n");
    scanf("%f", &x);
    fflush(stdin);
    printf("Insira mais um valor: \n");
    scanf("%f", &y);
    fflush(stdin);
    
    m= maior(x,y);
    printf("O maior numero: %.2f\n", m);
    
    return 0;
    
}
    

