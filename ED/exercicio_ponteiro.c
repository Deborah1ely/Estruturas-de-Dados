#include<stdio.h>

// passagem por referencia
void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a,b;
    a = 3; b = 2;

    printf("%d %d\n",a,b);
    troca(&a,&b);
    
    printf("%d %d\n",a,b);

    return 0;
}