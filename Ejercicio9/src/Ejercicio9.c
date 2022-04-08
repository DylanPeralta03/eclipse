/*
 ============================================================================
 Name        : Ejercicio3-2.c
 Author      : Dylan Peralta Div K
Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso
afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void parImpar(int);

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	printf("Ingrese un número: ");
	scanf("%d", &numero);

	parImpar(numero);

	return 0;
}

void parImpar(int num){


	if(num%2==0){
		printf("1");
	}
	else{
		printf("0");
	}

}
