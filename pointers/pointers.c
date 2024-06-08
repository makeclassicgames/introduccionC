#include<stdio.h>

#define MAXNUM 5

int main(){
    int misnumeros[MAXNUM]={1,2,3,4,5};
    calcularTriple(misnumeros,MAXNUM);

    //TODO: mostrar resultado

    for(int i=0;i<MAXNUM;i++){
        printf(misnumeros[i]);
    }
    return 0;
}