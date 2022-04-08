/*
 ============================================================================
 Name        : Ejercicio3-3.c
 Author      : Dylan Peralta Div K
Crear una función que pida el ingreso de un entero y lo retorne
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void numeroEntero(int);

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	printf("ingrese un número entero: ");
	scanf("%d", &numero);

	numeroEntero(numero);

	return 0;
}

void numeroEntero(int num1){
	printf("El numero ingresado es: %d", num1);
}






