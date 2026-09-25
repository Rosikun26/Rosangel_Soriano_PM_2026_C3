#include <stdio.h>
#include <stdlib.h>

float main(void)
{
    float PRO;
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 6)
        printf("\nAprobado ");

        else {
            printf("\nReprobado ");
        }

        system("pause");

        return 0;


}

