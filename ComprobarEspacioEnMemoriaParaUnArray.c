//* Reservar espacio en memoria con malloc para un array de tipo double para 1000 numeros
//* y comprobar si el puntero es válido (Si el puntero devuelve NULL, significa que
//* no hay suficiente memoria).
#include <stdio.h>
#include <stdlib.h>
#define TOPE 1000

int main() {
    double *p_array;
    p_array = malloc(TOPE *sizeof(double));

    if (p_array == NULL){
        printf("Error en la asignacion de memoria\n");
        return -1; //! Intentar recuperar memoria
    }else{
        srand(time(NULL));
        for (int i = 0; i < TOPE; i++){
            p_array[i] = 1 + rand() % ((TOPE+1)-1);
            printf("%lf.\n",p_array[i]);
    }
}
    return 0;
}
//* Asignacion Dinamica de Memoria