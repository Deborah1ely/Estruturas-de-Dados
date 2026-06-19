#include <stdio.h>
#include <stdlib.h>


typedef struct arvores
{
    int value;
    struct arvores *direita, *esq;
}Arvore;

Arvore create(Arvore *root){
    Arvore *new = (Arvore *)malloc(sizeof(Arvore));

    new->value = value;
    new->direita =  NULL;
    new->esq=NULL;
    return new;
};

Arvore addElement(Arvore *root, Arvore *new){
    if (root == NULL)
    {
        return new;
    }else{
        if(root->value >= new->value){
            root->esq = addElement(root->esq, new);
        }else{
            root->direita = addElement(root->direita, new);
        }
        return root;
    }
    
}

int main(){
    Arvore *root = NULL;
    
}