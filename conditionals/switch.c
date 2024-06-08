#include<stdio.h>

int main(){
    int opcion;
    printf("Introduzca acción \n");
    printf("1.- opción 1\n");
    printf("2.- Opción 2\n");
    scanf("%d", &opcion);
    //TODO: revisar opciones con un switch
    switch(opcion){
        case 1:
            printf("Caso 1\n");
        break;
        case 2:
            printf("Caso 2\n");
        break;
        default:
            printf("Opción inválida");
    }

    return 0;
}