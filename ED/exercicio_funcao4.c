#include <stdio.h>

int temperatura(int cond){
    int c,f;
    int temp;
    
    printf("Digite a temperatura: ");
    scanf("%d",&temp);

    if (cond == 1){
        return c = 5*(temp-32)/9;
    }else{
        return f = (9*temp/5) + 32;
    }
    
}

int main(){
    int cond;

    printf("Digite 1 para calcular em Celsius e 2 para calcular em Fahrenheit: \n");
    scanf("%d",&cond);

    printf("%d\n", temperatura(cond));

    return 0;
}