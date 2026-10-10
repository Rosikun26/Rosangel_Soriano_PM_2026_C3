#include <stdio.h>
#include <stdlib.h>

int Suma(int x, int y)
{
    return(x+y);
}

int Resta(int x, int y)
{
    return(x-y);
}

int Control(int (*apf) (int, int), int x, int y)
{
    int RES;
    RES = (*apf) (x, y);
    return(RES);
}

void main(void)
{
    int r1, r2;
    r1 = Control(Suma, 15, 5);
    r2 = Control(Resta, 10, 4);
    printf("\nResultado 1: %d", r1);
    printf("\nResultado 2: %d", r2);
}
