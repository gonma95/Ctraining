#include<stdio.h>



int main()
{
    int array [10]={2,5,9,8,6,1,3,7,4,10};
    int aux,a;
    int sup, inf,mitad,flag=0;

    for (int i = 0; i < 10; i++)
        {
        printf("%i",array[i]);
        }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[j]>array[j+1])
            {
                aux=array[j+1];
                array[j+1]=array[j];
                array[j]=aux;
            }
            
        }
        
    }
    for (int i = 0; i < 10; i++)
        {
        printf("%i",array[i]);
        }
    printf("\n");


printf("Introduce el numero que deseas buscar: \n");
fflush(stdin);
scanf("%i",&a);


sup= 10;
inf =0;
mitad=(sup+inf)/2;

do
{
if (a==mitad)
{
printf("Numero encontrado\n");
flag=1;
}
else if (a>mitad)
{
mitad=(mitad+sup)/2; 
}
else
{
    mitad=(mitad+inf)/2;
}
} while (flag == 0);

printf("Se ha encontrado el numero en la posicion: %i",mitad);




    return 0;
}
