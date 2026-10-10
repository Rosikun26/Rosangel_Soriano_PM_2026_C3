#include <stdio.h>
#include <stdlib.h>

void f1(void); //prototipo de función//


/* conflicto de variable con el mismo nombre*/

//el ambiente de la variable//
//ciclo de vida de la variable//

int K = 5; //Variable global//

void main(void)
{
    printf("\n---- Variable global real: %i", K);
    int I;
    for (I = 1; I<= 3; I++)
        f1();
}
void f1(void)
{
    int K = 2;
    K+= K;
    printf("\n\nEl valor de la variable local es: %d", K);
    /* forma en lenguaje C++ ::K = ::K + K;*/
    K = K + K;
     //uso de ambas variables//

    printf("\nEl valor de la variable global es: %d", K);
}
