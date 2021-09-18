
//* typedef structNombreDeLaestructura {
//* Variable_1;
//* Variable_2;
//* Variable_N;
//* };  


#include <stdio.h>

int main() {

    //! Definimos un nuevo tipo llamado "MiTipoDeDato"
    //! Esto solo es otra manera de declarar un entero 
    typedef int MiTipoDeDato;

    //* Ahora podemos crear variables del tipo "MiTipoDeDato"
    MiTipoDeDato Variable1;
    //* Pero tambien podemos seguir usando int
    int Variable2;
    printf("Escribe 2 enteros\n");
    scanf("%d %i",&Variable1,&Variable2);
    printf("\nNumeros digitados: %i %d",Variable1,Variable2);


    return 0;
}