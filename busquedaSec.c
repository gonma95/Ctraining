#include<stdio.h>

int busquedaSec(int a,int arr[10]);

    

int main()
{
    /* code */
    int array[10]= {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        printf(" %i ",i);
    }
    
    int a;
    printf("\nIntroduce el elemento que deseas buscar: ");
    fflush(stdin);
    scanf("%i",&a);
    if (busquedaSec(a,array)==1)
    {
        printf("\nSe ha encontrado el numero buscado\n");
    }
    else
    {
        printf("\nNo se ha encontrado el numero buscado\n");
    }
    return 0;
}

int busquedaSec(int a,int arr[10]){
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==a)
        {
        return 1;
        }
    }
    return 0;
}