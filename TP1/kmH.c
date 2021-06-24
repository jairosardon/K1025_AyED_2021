#include <stdio.h>
int main()
{
    float mts, kmtshr;
    printf("Ingrese Velocidad en MTS/SEG ");
    scanf("%f", &mts);
    kmtshr = mts * 3.6;
    printf("%.2f MTS/SEG = %.2f KMTS/HR", mts, kmtshr);
    return 0;
}
