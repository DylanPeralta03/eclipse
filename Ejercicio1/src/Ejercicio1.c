/*
 ============================================================================
 Name        : Ejercicio1.c
 Author      : Dylan Peralta
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 01
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numeroA;
	int numeroB;
	int resultado;

	printf("ingrese el primer numero");
	scanf("%d",&numeroA);

	printf("ingrese el segundo numero");
	scanf("%d",&numeroB);

	resultado = numeroA + numeroB;

	printf("la suma entre %d y %d es %d",numeroA,numeroB,resultado);

	return 0;

}
