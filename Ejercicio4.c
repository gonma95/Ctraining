#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* code */
float primero, segundo, tercero, totalPaciales, final, tFinal, nota;
printf("Introduzca la nota en los 3 examenes parciales:\n ");
scanf("%f %f %f",&primero,&segundo,&tercero);

totalPaciales= ((primero+segundo+tercero)/3)*0.55;

printf("Introduzca la nota en el examen final:\n ");
scanf("%f",&final);

final *= 0.3;

printf("Introduzca la nota en el trabajo final:\n ");
scanf("%f",&tFinal);

tFinal *= 0.15;

nota=totalPaciales+final+tFinal;
printf("La media de los parciales es de: %.2f \n",totalPaciales);
printf("La nota del examen final es de: %.2f \n",final);
printf("La nota del trabajo final es de: %.2f \n",tFinal);
printf("La calificacion final es de: %.2f \n",nota);

    return 0;
}
