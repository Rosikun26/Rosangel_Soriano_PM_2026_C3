#include <stdio.h>
#include <stdlib.h>
#define SALIR 0
#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3
#define DIVISION 4
#define RAIZ_CUADRADA 5
#define POTENCIA 6
#define ERR_OK 0
#define ERR_SYNTAX 1
#define ERR_DivByZero 555
#include <math.h>






// Funciones() --> Divide el problema
// Valor y referencia (punteros)
// Ambito de las variable o ciclo de vida
// * --> operador de indirección y para declarar punteros (referencia)
// & --> operador de dirección

int suma(double s1, double s2, double *r); //declaración de función
int division(double dividendo, double divisor, double *r);
int multiplicacion(double m1, double m2, double *r);
int resta(double n1, double n2, double *r);
int potencia (double base, double exp, double *r);
int raiz(double n1, double *r);

int main()

{


    int menu = -1;
    double n1 = 0.0;
    double n2 = 0.0;
    double result = 0.0;
    int err = ERR_OK;
    double base = 0.0;
    double exp = 0.0;

    printf("\nCALCULADORA ROSY V1.0");
    do
    {
        printf("\n0-SALIR\n1-SUMA\n2-RESTA\n3-MULTIPLICACION\n4-DIVISION\n5-RAIZ_CUADRADA\n6-POTENCIA\n");
        scanf("%i", &menu);

        if (menu == SUMA)
        {
            printf("\nSUMA");
            printf("\nEscriba el primer Sumando: ");
            scanf("%lf", &n1);
            printf("\nEscriba el segundo Sumando: ");
            scanf("%lf", &n2);
            err = suma(n1, n2, &result);
            if (err == ERR_OK)
            {
                printf("\nResultado de la SUMA de %lf + %lf = %lf", n1, n2, result);
            }

            //result = n1 + n2;//


        }
        if (menu == RESTA)
        {
            printf("\nRESTA");
            printf("\nEscriba el primer numero: ");
            scanf("%lf", &n1);
            printf("\nEscriba el segundo numero: ");
            scanf("%lf", &n2);
            err = resta(n1, n2, &result);

            if (err == ERR_OK)
            {
                printf("\nResultado de la RESTA de %lf - %lf = %lf", n1, n2, result);
            }

            //result = n1 - n2;



        }
        if (menu == MULTIPLICACION)
        {
            printf("\nMULTIPLICACION");
            printf("\nEscriba el primer Multiplacando: ");
            scanf("%lf", &n1);
            printf("\nEscriba el segundo Multiplicador: ");
            scanf("%lf", &n2);

            err = multiplicacion(n1, n2, &result);

            if (err == ERR_OK)
            {
                printf("\nResultado de la MULTIPLICACIÓN de %lf x %lf = %lf", n1, n2, result);
            }

            //result = n1 * n2;



        }
        if (menu == DIVISION)
        {
            printf("\nDIVISION");
            printf("\nEscriba el Dividendo: ");
            scanf("%lf", &n1);
            printf("\nEscriba el Divisor: ");
            scanf("%lf", &n2);
            err = division(n1, n2, &result);
            if (err == ERR_OK)
            {
                printf("\nResultado de la DIVISION de %lf / %lf = %lf", n1, n2, result);
            }
            else
            {
               if (err == ERR_DivByZero)
               {
                   printf("\nNo se puede dividir entre cero(0)");
               }
            }

            //result = n1 / n2;



        }

        if (menu == RAIZ_CUADRADA)
        {
            printf("\nRAIZ_CUADRADA");
            printf("\nIngrese el numero que le desea sacar la raiz cuadrada: ");
            scanf("%lf", &n1);


            err = raiz(n1, &result);

            if (err == ERR_OK)
            {
                printf("\nLa raíz cuadrada de %lf es: %lf", n1, result);
            }
            else
            {
                printf("\nNo existe raíz cuadrada del numero insertado");
            }
        }

        if (menu == POTENCIA)
        {
            printf("\nPOTENCIA");
            printf("\nIngrese el numero base: ");
            scanf("%lf", &base);
            printf("\nIngresa el exponente: ");
            scanf("%lf", &exp);


            err = potencia(base, exp, &result );

            if (err == ERR_OK)
            {
                printf("\nEl numero %lf elevado a la %lf es: %lf", base, exp, result );
            }


        }

        }


    while (menu != SALIR);
    {

    }
    return 0;

}

int suma(double s1, double s2, double *r)
{
    *r = s1 + s2;
    return ERR_OK;
}

int division(double dividendo, double divisor, double *r)
{
    if (divisor != 0)
    {
        *r = dividendo / divisor;
        return ERR_OK;
    }
    else
    {
        return ERR_DivByZero;
    }

}

int resta (double n1, double n2, double *r)
{
    *r = n1 - n2;
    return ERR_OK;
}

int multiplicacion(double m1, double m2, double *r)
{
    *r =  m1 * m2;
    return ERR_OK;
}

int potencia (double base, double exp, double *r)
{
    *r = pow(base, exp);
    return ERR_OK;
}

int raiz (double n1, double *r)
{
    if (n1 < 0)
    {
        return ERR_SYNTAX;
    }
    else
    {
       *r = sqrt(n1);
        return ERR_OK;
    }


}


/* #include <stdio.h>

#include <stdlib.h>

#define SALIR 0

#define SUMAR 1

#define RESTAR 2

#define MULTIPLICAR 3

#define DIVIDIR 4

#define ERR_OK 0

#define ERR_SYNTAX 1

#define ERR_DivByZero 555

// Funciones()

// Sirve para dividir el problema

// Valor y Referencia (punteros)

// devolver el error

// Ambito de las variable o ciclo de vida

// *operador de indireccion y para declarar punteros

// &operador de direccion

int suma(double s1, double s2, double *r);//declaracion de funcion

int divicion(double dividendo, double divisor, double *r);

int main()

{

    int menu = -1;

    double n1 = 0.0;

    double n2 = 0.0;

    double result = 0.0;//variable global

    int err = ERR_OK;

    printf("\nCALCULADORA V1.0");

    do

    {

        printf("\n0-SALIR\n1-SUMAR\n2-RESTAR\n3-MULTIPLICAR\n4-DIVIDIR\n");

        scanf("%i",&menu);

        if(menu == SUMAR)

        {

            printf("\nSUMA");

            printf("\nEscriba el primer numero:");

            scanf("%lf",&n1);

            printf("\nEscriba el segundo numero:");

            scanf("%lf",&n2);

            err = suma(n1,n2,&result);

            if(err == ERR_OK)

            {

                printf("\nResultado de la SUMA de %lf + %lf = %lf",n1,n2,result);

            }

            else

            {

            }

        }

        if(menu == RESTAR)

        {

        }

        if(menu == MULTIPLICAR)

        {

        }

        if(menu == DIVIDIR)

        {

            printf("\nDIVIDIR");

            printf("\nEscriba el Dividendo:");

            scanf("%lf",&n1);

            printf("\nEscriba el Divisor:");

            scanf("%lf",&n2);

            err = divicion(n1,n2,&result);

            if(err == ERR_OK)

            {

               printf("\nDivision %lf/%lf=%lf",n1,n2,result);

            }else

            {

                if(err == ERR_DivByZero)

                {

                   printf("\nNo se puede dividir entre cero");

                }

            }

        }

    }

    while(menu != SALIR);

    return 0;

}

int suma(double s1, double s2, double *r)

{

    *r = s1 + s2;

    return ERR_OK;

}

int divicion(double dividendo, double divisor, double *r)

{

    if(divisor != 0)

    {

        *r = dividendo / divisor;

        return ERR_OK;

    }

    else

    {

        return ERR_DivByZero;

    }

}
 */
