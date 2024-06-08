#include<stdio.h>

int main(){

    int edad =0;

    printf("Introduzca Edad: ");
    scanf("%d",&edad);

    if(edad>=18){
        printf("Es mayor de edad");
    }else{
        printf("Es menor de edad");
    }
    return 0;
}