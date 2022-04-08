/*
 ============================================================================
 Name        : Ejercicio3-2.c
 Author      : Dylan Peralta Div K
Crear una funci�n que permita determinar si un n�mero es par o no. La funci�n retorna 1 en caso
afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void parImpar(int);

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	printf("Ingrese un n�mero: ");
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
