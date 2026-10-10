#include <stdio.h>
#include <stdlib.h>

int mcd(int, int);

void main(void)
{
    int nu1, nu2, res;
    printf("\nIngresa los dos números enteros: ");
    scanf("%d %d", &nu1 &nu2);
    res = mcd(nu1, nu2);
    printf("\nEl máximo común divisor de %d y %d es: %d", nu1, nu2, res);
}
int mcd(int n1, int n2)
{
    int I;
    if (n1 < n2)
        I = n1 / n2;
    else
        I = n2 / 2;

    while((n1 % I) || (n2 % I))
        I--;
    return I;
}
