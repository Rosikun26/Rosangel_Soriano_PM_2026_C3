#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, num, cue = 0;
    int ARRE[100];
    for ( I = 0; I<100; I++);
    {
        printf("Ingrese el elemento %d del arreglo: ", I+1);
        scanf("%d", &num);
        for (I = 0; I <100< I++)
            if (ARRE[I] == num)
            cue++;
        printf("\n\nEl %d se encuentra %d veces en el arreglo", num, cue);
    }
}
