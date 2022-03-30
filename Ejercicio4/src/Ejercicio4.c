/*

 ============================================================================
 Name        : Ejercicio1Tema2.c
 Author      : Dylan Peralta Div K
 Ingresar 5 números enteros calcular y mostrar el promedio de los números.
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
		printf("ingrese un número: ");
		scanf("%d", &numeroA);

		acumuladorNumeros+=numeroA;
		contadorNumeros++;
	}

	promedioNumeros = (float)acumuladorNumeros/contadorNumeros;

	printf("El promedio de los numeros es: %.2f", promedioNumeros);

	return 0;
}
