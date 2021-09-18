#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char nombre[20];
    char *p_nombre, *p_nombre2;
    int longitud;

    strcpy(nombre, "Gonzalo");
    longitud = strlen(nombre);
    p_nombre = (char*)malloc(sizeof(char) * (longitud + 1));

    strcpy(p_nombre, nombre);
    printf("Nombre: %s", p_nombre);

    p_nombre2 = (char*)realloc(p_nombre, sizeof(char) * (longitud + 8));
    strcat(p_nombre2," Martin");

    printf("Nombre: %s", p_nombre2);
    free(p_nombre);
    free(p_nombre2);
    return 0;
}
