#include<stdio.h>

typedef struct promedio
{
    float nota1;
    float nota2;
    float nota3;
};

typedef struct alumno
{
char nombre[40];
char sexo[10];
int edad;
struct promedio prom;
}alumno;

float media (float notas[3]){
    float med;
    for (int i = 0; i < 3; i++)
    {
        med += notas[i];
    }
    med /=3;
    return med;
}

int main()
{
float med=0;

alumno alumno1;
printf("Introduce el nombre del alumno: \n");
fflush(stdin);
gets(alumno1.nombre);

printf("Introduce el sexo del alumno: \n");
fflush(stdin);
gets(alumno1.sexo);

printf("Introduce la edad del alumno: \n");
fflush(stdin);
scanf("%i",&alumno1.edad);

printf("Introduce la nota del primer parcial: \n");
fflush(stdin);
scanf("%f",&alumno1.prom.nota1);
printf("Introduce la nota del segundo parcial: \n");
fflush(stdin);
scanf("%f",&alumno1.prom.nota2);
printf("Introduce la nota del tercer parcial: \n");
fflush(stdin);
scanf("%f",&alumno1.prom.nota3);

float notas[3]={alumno1.prom.nota1,alumno1.prom.nota2,alumno1.prom.nota3};
med = media(notas);
printf("El nombre del alumno es: %s\n", alumno1.nombre);
printf("El sexo del alumno es: %s\n",alumno1.sexo);
printf("La edad del alumno es: %i\n",alumno1.edad);
printf("La nota media obtenida es de : %.2f",med);

    return 0;
}
