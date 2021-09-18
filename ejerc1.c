#include <stdio.h>
int main()
{
    /* code */
    float a,b,suma,resta,mult,div;

    printf("Introduce el primer numero que quieres operar:");
    scanf("%f",&a);
    printf("\nIntroduce el segundo numero que quieres operar:");
    scanf("%f",&b);
    printf("Los numeros que has introducido son: %.2f y %.2f", a,b);


suma = a+b;
resta = a-b;
mult=a*b;
div=a/b;

printf("\nEl resultado de la suma es: %.2f", suma);
printf("\nEl resultado de la resta es: %.2f", resta);
printf("\nEl resultado de la multiplicacion es: %.2f", mult);
printf("\nEl resultado de la division es: %.2f", div);

    return 0;
}
