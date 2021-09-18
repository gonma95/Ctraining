#include <stdio.h>
#include <string.h>

char categoria[20];

typedef struct Corredor
{
    char nombre[40];
    int edad;
    char sexo[40];
    char club[40];
} Corredor;

void cat(int edad)
{
    if (edad <= 18)
    {
        printf("El corredor pertenece a la categoria Juvenil");
    }
    else if (edad > 18 && edad <= 40)
    {
        printf("El corredor pertenece a la categoria Senior");
    }
    else
    {
        printf("El corredor pertenece a la categoria Veterano");
    }
}

int main()
{
    Corredor Corredor1;

    printf("Introduce el nombre del corredor: \n");
    gets(Corredor1.nombre);
    fflush(stdin);
    printf("Introduce el sexo del corredor: \n");
    fflush(stdin);
    gets(Corredor1.sexo);
    printf("Introduce el club del corredor: \n");
    fflush(stdin);
    gets(Corredor1.club);
    printf("Introduce la edad del corredor: \n");
    scanf("%i", &Corredor1.edad);
    fflush(stdin);

    printf("El nombre del corredor es: %s\n", Corredor1.nombre);
    printf("La edad del corredor es: %i\n", Corredor1.edad);
    printf("El sexo del corredor es: %s\n", Corredor1.sexo);
    printf("El club del corredor es: %s\n", Corredor1.club);

    cat(Corredor1.edad);

    return 0;
}
