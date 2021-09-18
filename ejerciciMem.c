#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    float *array;
    int n = 0;

    printf("\nIndique el numero de elementos del array");
    fflush(stdin);
    scanf("%i", &n);

    array = calloc(n, sizeof(float));

    if (array == NULL)
    {
        printf("\nError de asignacion de memoria");
        return -1;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            printf("\nIntroduzca el %i numero", i);
            fflush(stdin);
            scanf("%f", &array[i]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        printf("\nNumero %.2f", array[j]);
    }

    return 0;
}