#include <stdio.h>

int main () {

    int i, j, k;
    int r = 5;


    for (i = r; i>= 1; i--) {
        for (k=0; k< r-i; k++)
            printf("_");
        for (j=i; j<= 2*i-1; j++)
            printf("*");
        printf("\n");
    }

    return 0;



}