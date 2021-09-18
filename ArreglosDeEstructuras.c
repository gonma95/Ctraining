//Arreglos de Estructuras En C

#include <stdio.h>

struct persona{
        char nombre[20];
        int edad;
    }personas[5]; //persona1,persona2,...,persona5;

int main() {

    int i;
    for (i = 0; i <5; i++){
        fflush(stdin);

        printf("%i) Escribe su Nombre\n",i+1);
        gets(personas[i].nombre);
        printf("%i) Escribe su Edad\n",i+1);
        scanf("%i",&personas[i].edad);
        printf("\n");
    }
    
    for ( i = 0; i <5; i++){
        printf("\n%i) Su nombre es: %s",i+1,personas[i].nombre);
        printf("\n%i) Su Edad es: %i",i+1,personas[i].edad);
    }printf("\n\n");
    
    

    return 0;
}