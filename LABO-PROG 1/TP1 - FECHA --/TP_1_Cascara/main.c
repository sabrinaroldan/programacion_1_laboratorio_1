#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int sumaNumerosIngresados (int a, int b);
int restaNumerosIngresados (int a, int b);
int divisionNumerosIngresados (int a, int b);
int multiplicacionNumerosIngresados (int a, int b);
int factorialNumerosIngresados (int a);

int main()
{
    char seguir='s';
    int opcion=0;
    int x;
    int y;


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer operando: \n");
                scanf("%d",&x);
                break;
            case 2:
                printf("Ingrese el segundo operando: \n");
                scanf("%d",&y);
                break;
            case 3:
                sumaNumerosIngresados (x,y);
                break;
            case 4:
                restaNumerosIngresados (x,y);
                break;
            case 5:
                divisionNumerosIngresados (x,y);
                break;
            case 6:
                multiplicacionNumerosIngresados (x,y);
                break;
            case 7:
                factorialNumerosIngresados (x);
                break;
            case 8:
                sumaNumerosIngresados (x,y);
                restaNumerosIngresados (x,y);
                divisionNumerosIngresados (x,y);
                multiplicacionNumerosIngresados (x,y);
                factorialNumerosIngresados (x,y);
                break;
            case 9:
                seguir = 'n';
                break;
        }


    return 0;
}
}
