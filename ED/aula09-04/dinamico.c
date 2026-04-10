#include<stdio.h>
#include<stdlib.h>

struct _data{
    int dia;
    int mes;
    int ano;
    struct _data *dt;
};
typedef struct _data Data;

int main(){
    Data *dt;
    dt = (Data *)malloc (sizeof(Data));
    dt->dia = 9;
    dt->mes = 4;
    dt->ano = 2026;
    dt->dt =NULL;
     

    dt = (Data *)malloc (sizeof(Data));
    dt->dia = 30;
    dt->mes = 4;
    dt->ano = 2026;
    

    return 0;
};
