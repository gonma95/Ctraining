/*Crear un archivo de texto, ponerle el texto que deseas, y luego crear un 
programa en C para agregarle mas texto al archivo.*/

//* Parte Dos

#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){

	int c;
	char direccion[] = "C:\\Users\\Usuario\\Desktop\\ProyectosC\\cursoC\\archivo1.txt";

	fd = fopen(direccion,"w");
	
	if(fd == NULL){
		printf("Error al tratar de abrir el archivo");
	}
	
	while((c=getchar()) != EOF){
		fputc(c,fd);
	}
	
	
	return 0;
}
