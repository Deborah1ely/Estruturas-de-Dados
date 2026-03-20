#include <stdio.h>

int main(){
    int a, *b;

    b = &a;
    *b = 1;
    printf("Valor de a = %d\n", a);
    return 0;
}