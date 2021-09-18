#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    /* code */
    char nombre [50];
    float aumento = 1.1;
    float  salario, sueldoF;

    printf("Introduce el nombre completo:\n");
    gets(nombre);
    printf("El nombre es del empleado es: %s\n", nombre);

    printf("Introduce el salario actual:\n");
    scanf("%f",&salario);
    printf("El salario actual es de: %.2f\n", salario);
    
    sueldoF=salario*aumento;
    printf("El nuevo salario es de: %.2f\n",sueldoF);
    return 0;
}
