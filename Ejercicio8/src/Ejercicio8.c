/*
 ============================================================================
 Name        : Ejercicio3-1.c
 Author      : Dylan Peralta Div K
Crear una función que muestre por pantalla el número flotante que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrar(float);

int main(void) {

	setbuf(stdout,NULL);
	float num;

	printf("Igrese un numero flotante: ");
	scanf("%f", &num);

	mostrar(num);

	return EXIT_SUCCESS;
}

void mostrar(float num){
	printf("El numero fue: %.2f",num);
}
