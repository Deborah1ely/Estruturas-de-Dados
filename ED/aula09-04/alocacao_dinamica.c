#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p =(int *)malloc(sizeof(int));
    *p=22;

    printf("Conteúdo do p: %d\n",*p);
    printf("Local de apontamento: %p\n",p);
    //scanf("%d",p); 

}