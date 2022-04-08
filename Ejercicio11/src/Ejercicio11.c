/*
 ============================================================================
 Name        : Ejercicio3-4.c
 Author      : Dylan Peralta Div K
Especializar la función anterior para que permita validar el entero ingresado en un rango
determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void numeroValidacion(int);

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	printf("ingrese un número entero: ");
	scanf("%d", &numero);

	numeroEntero(numero);

	return 0;
}

void numeroValidacion(int num){

	if(num<0 || num>320){
		printf("ERROR, número no valido");
	}
	else{
		printf("El numero ingresado es: %d", num);

	}
}





