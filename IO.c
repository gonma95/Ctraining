#include <stdio.h>
//Entradas y salidas

main(){ 

	int q;
	float w;
	char e[40];
	
	printf("Introduce el valor del int \n");
	scanf("%i",&q);
	printf("El valor del entero es: %i\n",q);
	
	printf("Introduce el valor del float\n");	
	scanf("%f",&w);
	printf("El valor del float es: %.2f \n",w);
	
	
	printf("escribe tu nombre \n");
	scanf("%s",&e);
	printf("El valor del char es: %s",e);
	
	printf("escribe tu nombre \n");
	gets(e);
	printf("El valor del char es: %s",e);
	

}
