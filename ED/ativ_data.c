#include<stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;

} Data;

void printData(Data d2){
    printf("%d/%d/%d\n", d2.dia, d2.mes, d2.ano);
}

Data atribuiData(int dia, int mes, int ano){
    Data aux;
    aux.dia = dia;
    aux.mes = mes;
    aux.ano = ano;

    return aux;
}

//outra maneira
void alteraData(Data *d, int dia, int mes, int ano){
    d->dia = dia;
    d->mes = mes;
    d->ano = ano;
}

struct tFunc{
    int id;
    char nome[20+1];
    double salario;
};

int main(){
    Data d1 = {26,3,2026},d2;
    d2=atribuiData(01,01,2027);
    alteraData(&d2,02,01,2027);

    printData(d2);
    return 0;
}