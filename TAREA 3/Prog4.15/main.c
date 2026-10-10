#include <stdio.h>
#include <stdlib.h>

int productoria(int);


void main(void)
{
    int num;

    do
    {
        printf("Ingresa el número del cual quieres calcular la productoria: ");
        scanf("%d", &num);
    }
    while (num > 100 || num < 1)<
        printf("\nLa productoria de %d es: %d", num, productoria(num));
}

int productoria(int n)
{
    int i, pro = 1;
    for (i = 1; i <= n; i++)
        pro *= i;
    return(pro);
}
