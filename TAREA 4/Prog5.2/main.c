#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int ELE[5] = {0};

    int I, vot;
    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &vot);

    while(vot)
    {
        if ((vot > 0) && (vot < 6))
            ELE[vot - 1]++;
        else
            printf("\nEl voto ingresado es incorrecto.\n");
        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &vot);
    }
    printf("\n\nResultados de la Elección\n";
    for ( I = 0; I <= 4; I++)
    {
        printf("\nCandidato %d: %d", I+1, ELE[I]);
    }
}
