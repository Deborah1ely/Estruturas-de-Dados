#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    char caractere;
    struct no *prox;
} No;

typedef struct {
    No *head;
    No *tail;
} Fila;

int isEmpty(Fila *queue){
    return (queue->head == NULL);
}

void entrada(Fila *queue, char letra) {
    No *novo = (No *)malloc(sizeof(No));

    novo->caractere = letra;
    novo->prox = NULL;

    if (queue->head == NULL && queue->tail == NULL) {
        queue->head = novo;
        queue->tail = novo;
    } else {
        queue->tail->prox = novo;
        queue->tail = novo;
    }
}

char saida(Fila *queue) {
    if (queue->head == NULL) {
        return '\0';
    }

    No *temp = queue->head;
    char letra = temp->caractere;

    if (queue->head == queue->tail) {
        queue->head = NULL;
        queue->tail = NULL;
    } else {
        queue->head = queue->head->prox;
    }

    free(temp);

    return letra;
}

int main() {
    Fila queue;

    queue.head = NULL;
    queue.tail = NULL;

    char letra;

    while ((letra = getchar()) != '\n') {
        entrada(&queue, letra);
    }

    while (!isEmpty(&queue)) {
        printf("Retirando: %c\n", saida(&queue));
    }

    return 0;
}