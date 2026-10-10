#include <stdio.h>
#include <stdlib.h>

void parimp(int, int *, int *);


void main(void)
{
    int I, n, num, par = 0, imp = 0;
    printf("Ingresa el número de datos: ");
    scanf("%d", &n);
    for (I = 1; I <= n; I++)
    {
        printf("Ingresa el número %d:", I);
        scanf("%d", &num);
        parimp(num, &par, &imp);
    }
    printf("\nNúmero de pares: %d", par);
    printf("\nNúmero de impares: %d", imp);
}
void parimp(int num, int *p, int *i)
{
    int res;
    res = pow(-1, num)
    if (res > 0)
        *p += 1;
    else
        if (res < 0)
        *in += 1;
}
