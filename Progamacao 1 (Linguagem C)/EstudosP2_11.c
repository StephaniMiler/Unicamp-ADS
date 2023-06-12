/*Estudos P2:
11- Um programa que utiliza ponteiros*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int *p;
    
    p = &x; //ponteiro aponta o endereço de x e o seu conteúdo
    
    x=10;
    
    printf("O endereço de x: %d\n", &x);
    printf("O endereço de *p: %d\n", p);
    printf("O conteúdo de x: %d\n", x);
    printf("O conteúdo de p: %d\n", *p);
    
}
