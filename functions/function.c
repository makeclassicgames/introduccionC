#include<stdio.h>

//prototype
int makeDouble(int);

int main(){

    //TODO: Crear una función que 
    // calcule el doble de un número pasado por
    // parámetro.
    int n;
    printf("Introduzca número: \n");
    scanf("%d",&n);

    printf("El doble de %d es: %d",n, makeDouble(n));

    return 0;
}

//Implementation
int makeDouble(int n){
    return 2*n;
}