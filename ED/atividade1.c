#include <stdio.h>

int main(){
    int hr;
    printf("Digite o número de horas trabalhadas: ");
    scanf("%d",&hr);

    int Vhr;
    printf("Digite o valor da hora: ");
    scanf("%d",&Vhr);

    if (hr > 200){
        printf("Salário: %d \n", (hr * Vhr) * 0,05); //não está dando certo
    }else{
        printf("Salário: %d \n", hr * Vhr);
    }

    return 0;
}