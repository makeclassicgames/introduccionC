#include<stdio.h>

#define MAX_NUM 5

int main(){
    int numbers[MAX_NUM];

    for(int i=0;i<MAX_NUM;i++){
        printf("Introduzca número: ");
        scanf("%d",&numbers[i]);
    }
    //TODO: calcular el cuadrado de cada numero.
    return 0;
}