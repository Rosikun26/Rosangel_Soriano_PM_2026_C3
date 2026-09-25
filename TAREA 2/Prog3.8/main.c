#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, NUM;
    long FAC;
    printf("\nIngrese el número: ");
    scanf("%d", &NUM);
    if (NUM >= )
    {
        FAC = 1;
        for (I=1; I<= NUM; I++)

            FAC *= I;
            printf("\nEl factorial de %d es: %ld", NUM, FAC);
    }
    else
    {
        printf("\nError en el dato ingresado");
    }
}
