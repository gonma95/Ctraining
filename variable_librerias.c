#include <stdio.h> //libreria IO
#define PI 3.1416 //Macro

int y =5; //Variable global

int main(){ //funcion principal
	float Suma;
	int x = 10; //Variable Local
	
	Suma = PI + x;
	printf("El resultado de la suma es: %.2f" ,Suma);
	return 0;
}
