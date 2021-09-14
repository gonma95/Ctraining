#include <stdio.h>
#include <stdlib.h>

typedef struct tNodo
{
    int valor;
    struct tNodo *sig;
} Nodo;

typedef struct tPila
{
    int tamano;
    Nodo *tope;
} Pila;

Pila *nuevaPila()
{
    Pila *n = (Pila *)malloc(sizeof(Nodo));
    n->tamano = 0;
    n->tope = NULL;
    return n;
}

void push(Pila *n, int valor)
{
    if (n)
    {
        Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
        nodo->valor = valor;
        nodo->sig = n->tope;
        n->tope = nodo;
        n->tamano++;
    }
}

int pop(Pila *n)
{
    if (n)
    {
        if (n->tamano)
        {
            int returnValue;
            Nodo *aux = n->tope;
            returnValue = aux->valor;
            n->tope = n->tope->sig;
            n->tamano--;
            free(aux);
            return returnValue;
        }
    }
}

int main()
{

    Pila *PILA = nuevaPila();
    push(PILA, 10);
    push(PILA, 20);
    push(PILA, 30);
    //* Estructura completamente dinamica
    printf("%d\n", pop(PILA));
    printf("%d\n", pop(PILA));
    printf("%d\n", pop(PILA));
    free(PILA);

    return 0;
}