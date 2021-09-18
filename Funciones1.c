#include <stdio.h>

int Sumar();
int a,b;


int main() {

    printf("Escribe 2 numeros\n");
    scanf("%i %i",&a,&b);

    printf("La suma es %i",Sumar(a,b));

    return 0;
}

int Sumar(int n1,int n2){
    int suma=0;
    suma = n1+n2;
    return suma;
}
