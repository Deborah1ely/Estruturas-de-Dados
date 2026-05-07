#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10

struct _lista{
    int id;
    char nome[MAX+1];

    struct lista *next;
    struct lista *prev;
    
}; typedef struct _lista Lista;

typedef struct {
    Lista *first;
    Lista *last;
    int size;
}Keeper;

Lista *newElement(int id, char *nome){
    Lista *new = (Lista *)malloc(sizeof(Lista));
    new->id = id;
    snprintf(new->nome, sizeof(new->nome),"%s",nome);
    new->next = NULL;
    new->prev = NULL;
    return new;


}

void printElements(Lista *first){
    Lista *aux;
    for (aux = first; aux != NULL; aux= aux-> next){
        printf("%d - %s\n", aux->id, aux->nome);
    }
}

void addElementKeeper(Keeper *sentinela, Lista *new){
    Lista *aux;
    if(sentinela->first == NULL && sentinela->last == NULL){
        sentinela->first = new;
        sentinela->last = new;
        sentinela->size = 1;
        return;
    }

    aux = sentinela->first;
    while(aux !=NULL){
        if (aux->id > new->id){
            break;
        }
        aux = aux->next;
    }

    if(aux == sentinela->first){
        new->next = aux;
        aux->prev = new;
        sentinela->first = new;
    }else if(aux == NULL){
        sentinela->last->next = new;
        new->prev = sentinela->last;
        sentinela->last = new;

    }else{
        Lista *anterior = aux->prev;
        new-> prev = anterior;
        new->next = aux;
        anterior->next = new;
        aux->prev = new;
    }
    sentinela ->size++;

}