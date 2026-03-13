#include <stdio.h>

int main(int argc, char const*argv[]){
    int vetor[5];
    int i;

    for(int i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nVetores: ");
    for(i = 0; i < 5; i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
