#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct _lista{
  int id;
  char nome [MAX+1];

  struct _lista *next;

};
typedef struct _lista Lista;

typedef struct {
  Lista *first;
}Keeper;


Lista *newElement (int id, char *nome){
  Lista *new = (Lista *) malloc(sizeof(Lista));
  new->id = id;
  //strcpy(new->nome, nome);
  snprintf(new->nome, sizeof(new->nome),"%s", nome);
  new->next = NULL;

  return new;
}

void printElement(Lista *first){
  Lista *aux;

  for (aux = first; aux != NULL; aux = aux->next){
    printf("%d - %s\n", aux->id, aux->nome);
  }

}

void *addElementKeeper(Keeper *sentinela, Lista *new, int tipoInsert){
  Lista *aux;

  if (sentinela-> first == NULL){
    sentinela->first = new;
    return;
  }

  if(tipoInsert == 1){
    //Adiciona no inicio
    new->next = sentinela->first;
    sentinela->first = new;

  }else{
    //Adiciona no fim
    aux = sentinela-> first;
    while (aux->next != NULL){
    aux = aux->next;
   }
    //APONTEIRAMENTO
    aux->next = new;

  }
}

Lista *addElement(Lista *first, Lista *new){
  Lista *aux;
  if (first == NULL)
    return new;

  aux = first;
  while (aux->next != NULL){
    aux = aux->next;
  }

  aux->next = new;

/*

  for (aux = first;aux != NULL;aux = aux->next){
    if(aux->next == NULL){
      aux->next = new;
    }
      } 
  
*/
  return first;
}

int main(){
  Keeper *sentinela = malloc(sizeof(Keeper));
  sentinela->first = NULL;
  Lista *new;

  new = newElement(1, "Deby");
  addElementKeeper(sentinela, new, 2);

/*  new = newElement(2, "Kauã");
  sentinela->first = addElement(sentinela, new);
*/

  new = newElement(3, "Anahy");
  addElementKeeper(sentinela, new, 2);

  new = newElement(4, "Inicio");
  addElementKeeper(sentinela, new, 1);

  printElement(sentinela->first);
  return 0;
}