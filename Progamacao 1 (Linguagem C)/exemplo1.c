#include <stdio.h>

int main() {
    int x;
    int y = 0;
    
    scanf("%d", &x);
    
    if (x <= 0) {
        printf("O valor de y é: %d\n", y);
    } else {
        while (x > 0) {
            y = y + x;
            x = x - 1;
        }
        printf("O valor de y é: %d\n", y);
    }
    
    return 0;
}
