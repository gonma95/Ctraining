#include <stdio.h>

struct persona{
    char nombre[20];
    int edad;
}persona1, persona2; 


int main() {

    printf("\nEscribe tu nombre: ");
    gets(persona1.nombre);

    printf("\nEscribe tu edad: ");
    scanf("%i",&persona1.edad);

    fflush(stdin);

    printf("\nEscribe tu nombre: ");
    gets(persona2.nombre);
    
    printf("\nEscribe tu edad: ");
    scanf("%i",&persona2.edad);

    printf("\nSu nombre es: %s\n",persona1.nombre);
    printf("La edad es: %i\n",persona1.edad);

    printf("\nSu nombre es: %s\n",persona2.nombre);
    printf("La edad es: %i\n",persona2.edad);


    return 0;
}