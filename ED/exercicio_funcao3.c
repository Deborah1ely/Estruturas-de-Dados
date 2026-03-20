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

int maior_valor(int a,int b, int c){
    int funcaoAnt;
    funcaoAnt = maior(a,b);

    if(funcaoAnt> c){
        return funcaoAnt;
    }else{
        return c;
    }

}

int main(){
    int a, b,c;
    printf("Digite três número: \n");
    scanf("%d %d %d",&a,&b,&c);

    printf("O maior valor entre os números é: %d\n", maior_valor(a,b,c));

    return 0;
}