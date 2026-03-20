#include <stdio.h>

int maior(int a,int b){
    int resul;
    
    if (a == b){
        return b;
    }else{
        if(a>b){
            return a;
        }else{
            return b;
        }}
}

int main(){
    int a, b;
    printf("Digite dois número \n");
    scanf("%d %d",&a,&b);

    printf("O maior valor entre A e B é: %d\n", maior(a,b));

    return 0;
}