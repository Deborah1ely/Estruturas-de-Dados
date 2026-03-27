#include<stdio.h>

void maior(int i1, int i2, int *pi){

    // condicao ternaria -->   *pi = (i1>i2)? i1:i2;

    if (i1 > i2){
        *pi = i1;
    }else{
        *pi = i2;
    }
}


int main(){
    int a,b;
    a = 3; b = 2;

    printf("%d %d\n",a,b);
    troca(&a,&b);
    
    printf("%d %d\n",a,b);

    int m;
    maior(a,b,&m);
    printf("maior");

    return 0;
}

//falta codigo 