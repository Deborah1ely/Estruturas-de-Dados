#include <stdio.h>

int diferenca(int a,int b){
    int resul;
    resul = a - b;
    return resul;
}

int main(){
    int a, b;
    printf("Digite dois número \n");
    scanf("%d %d",&a,&b);

    printf("A diferença de A e B é de: %d\n", diferenca(a,b));

    return 0;
}