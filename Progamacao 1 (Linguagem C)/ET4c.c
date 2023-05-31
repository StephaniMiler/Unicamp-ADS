#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;
    
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &numero);
        
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    
    printf("%d pares, %d impares\n", pares, impares);
    
    return 0;
}
