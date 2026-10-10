#include <stdio.h>
#include <stdlib.h>

int mad(int);

void main(void)
{
    int num, res;
    printf("\nIngresa el número: ");
    scanf("%d", %num);
    res = mad(num);
    printf("\nEl mayor divisor de %d es: %d", num, res);
}
int mad(int n1)
{
    int I = (n1 / 2);
    while ( n1 % I)
        I--;
    return I;
}
