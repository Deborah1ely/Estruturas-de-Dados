#include <stdio.h>
#include <string.h>

int main(){
    char vet[5] = "teste";

    if(strcmp(vet, "teste")==0){
        printf("Igual!\n");
    }else{
        printf("Diferente!\n");
    }

    return 0;
}
