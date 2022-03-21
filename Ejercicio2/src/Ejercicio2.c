/*
 ============================================================================
 Name        : Ejercicio2.c
 Author      : Dylan Peralta
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 02
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numeroA;
	int numeroB;
	int numeroC;

	printf("ingrese el primer numero: ");
	scanf("%d",&numeroA);

	printf("ingrese el segundo numero: ");
	scanf("%d",&numeroB);

	printf("ingrese el tercer numero: ");
	scanf("%d",&numeroC);

	if(numeroA>numeroB && numeroA>numeroC)
	{
		printf("El mayor de los numeros es el primer numero");
	}
	else{
		if(numeroB>numeroC){
			printf("El mayor de los numeros es el segundo numero");
		}
		else{
			printf("El mayor de los numeros es el tercer numero");
		}
	}

	return EXIT_SUCCESS;
}
