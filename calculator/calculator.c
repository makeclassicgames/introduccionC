#include <stdio.h>
#include "operations.h"

void mostrarMenu();
void ejecutarOpcion(int);

int main()
{

    int opcion;
    do
    {
        mostrarMenu();
        scanf("%d", &opcion);
        ejecutarOpcion(opcion);
    } while (opcion != 0);

    return 0;
}

void mostrarMenu()
{
    printf("Seleccione Opcion:\n");
    printf("1.- sumar\n");
    printf("2.- Restar\n");
    printf("3.- Multiplicar\n");
    printf("4.- Dividir\n");
    printf("0.- Salir\n");
}

void ejecutarOpcion(int opcion)
{
    int a, b;
    switch (opcion)
    {
    case SUMAR:
        printf("Introduzca Operando 1:");
        scanf("%d", &a);
        printf("Introduzca Operando 2: ");
        scanf("%d", &b);
        printf("El resultado es: %d", add(a, b));
        break;
    case RESTAR:
        printf("Introduzca Operando 1:");
        scanf("%d", &a);
        printf("Introduzca Operando 2: ");
        scanf("%d", &b);
        printf("El resultado es: %d", sub(a, b));
        break;
    case MULT:
        printf("Introduzca Operando 1:");
        scanf("%d", &a);
        printf("Introduzca Operando 2: ");
        scanf("%d", &b);
        printf("El resultado es: %d", prod(a, b));
        break;
    case DIV:
        printf("Introduzca Operando 1:");
        scanf("%d", &a);
        printf("Introduzca Operando 2: ");
        scanf("%d", &b);
        printf("El resultado es: %d", div(a, b));
        break;
    case 0:
        printf("Hasta Luego\n");
    default:
        printf("Opcion Inválida\n");
        break;
    }
}