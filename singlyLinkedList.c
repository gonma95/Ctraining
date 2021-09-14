#include <stdio.h>
#include <stdlib.h>

typedef struct tNodo
{
    int valor;
    struct tNodo *sig;
} Nodo;

typedef struct tList
{
    int tamano;
    Nodo *primerItem;
    Nodo *ultimoItem;
} ListaLigada;

Nodo *getNode(int valor)
{
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    nodo->valor = valor;
    nodo->sig = NULL;
    return nodo;
}

ListaLigada *obtenerNuevaListaLigada()
{
    ListaLigada *ll = (ListaLigada *)malloc(sizeof(ListaLigada));
    ll->tamano = 0;
    ll->primerItem = NULL;
    ll->ultimoItem = NULL;
    return ll;
}

//* Operaciones CRUD

void add(ListaLigada *ll, Nodo *nodo)
{
    if (ll->primerItem == NULL)
        ll->primerItem = nodo;
    else
        ll->ultimoItem->sig = nodo;
    ll->ultimoItem = nodo;
    ll->tamano++;
}

Nodo *read(ListaLigada *ll, unsigned int indice)
{
    if (ll->tamano && indice < ll->tamano)
    {
        Nodo *exploradorLista = ll->primerItem;
        int i = 0;
        while (i++ < indice)
            exploradorLista = exploradorLista->sig;
        return exploradorLista;
    }
}

void update(ListaLigada *ll, unsigned int indice, int nuevoValor)
{
    if (ll->tamano && indice < ll->tamano)
    {
        Nodo *exploradorLista = ll->primerItem;
        int i = 0;
        while (i++ < indice)
            exploradorLista = exploradorLista->sig;
        exploradorLista->valor = nuevoValor;
    }
}

void removed(ListaLigada *ll, unsigned int indice)
{
    if (ll->tamano && indice < ll->tamano)
    {
        Nodo *aux;
        if (indice == 0)
        {
            aux = ll->primerItem;
            ll->primerItem = ll->primerItem->sig;
            free(aux);
        }
        else
        {
            Nodo *exploradorLista = ll->primerItem;
            int i = 0;
            while (i++ < indice - 1)
                exploradorLista = exploradorLista->sig;
            aux = exploradorLista->sig;
            if (indice == ll->tamano - 1)
            {
                exploradorLista->sig = NULL;
                ll->ultimoItem = exploradorLista;
            }
            else
                exploradorLista->sig = exploradorLista->sig->sig;
        }
        free(aux);
        ll->tamano--;
    }
}

int main()
{

    ListaLigada *LISTA = obtenerNuevaListaLigada();
    Nodo *a = getNode(1);
    Nodo *b = getNode(2);
    Nodo *c = getNode(3);
    Nodo *d = getNode(4);

    add(LISTA, a);
    add(LISTA, b);
    add(LISTA, c);
    add(LISTA, d);

    printf("%d\n", read(LISTA, 3)->valor);
    update(LISTA, 3, 11);
    printf("%d\n", read(LISTA, 3)->valor);
    printf("%d", read(LISTA, 0)->valor);
    removed(LISTA, 0);
    printf("\n%d", read(LISTA, 0)->valor);

    free(LISTA);
    return 0;
}