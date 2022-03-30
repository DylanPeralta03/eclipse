/*

 ============================================================================
 Name        : Ejercicio1Tema2.c
 Author      : Dylan Peralta Div K
 Ingresar 5 n�meros enteros calcular y mostrar el promedio de los n�meros.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	int numeroA;
	int acumuladorNumeros;
	int contadorNumeros;
	float promedioNumeros;

	acumuladorNumeros = 0;
	contadorNumeros = 0;

	for(int i = 0 ; i<5 ; i++){
		printf("ingrese un n�mero: ");
		scanf("%d", &numeroA);

		acumuladorNumeros+=numeroA;
		contadorNumeros++;
	}

	promedioNumeros = (float)acumuladorNumeros/contadorNumeros;

	printf("El promedio de los numeros es: %.2f", promedioNumeros);

	return 0;
}
