/*
 ============================================================================
 Name        : Ejercicio3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 03
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

	if(numeroA>numeroB && numeroA<numeroC || numeroA<numeroB && numeroA>numeroC){
		printf("El numero de medio es %d",numeroA);
	}
	else if(numeroB>numeroA && numeroB<numeroC || numeroB<numeroA && numeroB>numeroC){
		printf("El numero de medio es %d",numeroB);
	}
	else if(numeroC>numeroA && numeroC<numeroB || numeroC<numeroA && numeroC>numeroB){
		printf("El numero de medio es %d",numeroC);
	}
	else{
		printf("no existe un numero que este en el medio");
	}

	return EXIT_SUCCESS;
}
