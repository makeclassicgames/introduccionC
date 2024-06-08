#include<stdio.h>
#include"struct.h"

#define MAXNUM 5
int main(){

    Person persons[MAXNUM];

    for(int i=0;i<MAXNUM;i++){
        //TODO: add data to Structs
        Person aux={"aa","bb",22};
        persons[i]=aux;
    }

    //TODO: Show Struct information
     for(int j=0;j<MAXNUM;j++){
        printf("[%s,%s,%d]",persons[j].name,
        persons[j].lastName,
        persons[j].age);
     }
}