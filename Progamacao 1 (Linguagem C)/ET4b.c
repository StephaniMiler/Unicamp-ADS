#include <stdio.h>

int main() {
    
    int s, n, i, dif;
    long int sFat, nFat, difFat, result = 0; 

    scanf("%d %d", &n, &s);

    dif = n - s;

    for (i=n, nFat = 1; i > 0; i--)
        nFat = nFat * i;
    
    for (i=s, sFat = 1; i > 0; i--)
        sFat = sFat * i; 

    for (i=dif, difFat =1; i > 0; i--)
        difFat = difFat * i;

    if (sFat != 0 && difFat != 0)
    {
        result = nFat/(sFat*difFat);
    }
    
    printf("%ld\n", result);

    return 0;
}


