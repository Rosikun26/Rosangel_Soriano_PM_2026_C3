#include <stdio.h>
#include <stdlib.h>

int multiplo(int, int);

void main(void)
{
    int nu1, nu2, RES;
    printf("\nIngresa los dos números: ");
    scanf("%d %d", &nu1 &nu2);
    RES = multiplo(nu1, nu2);

    if (RES)
        printf("\nEl segundo número es múltiplo del primero");
    else
        printf("\nEl segundo número no es múltiplo del primero");
}

int multiplo(int n1, n2)
{
    int RES;
    if ((n2 % n1) == 0)
        RES = 1;
    else
        RES = 0;
    return(RES);
}
