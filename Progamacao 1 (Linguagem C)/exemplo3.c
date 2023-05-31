#include <stdio.h>

int main() {
    int num, produto = 1;
    
    while(1) {
        scanf("%d", &num);
        if(num < 0)
            break;
        produto *= num;
    }
    
    printf("O produto dos numeros digitados eh: %d", produto);
    
    return 0;
}
