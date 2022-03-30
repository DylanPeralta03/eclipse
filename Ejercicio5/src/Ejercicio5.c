/*
 ============================================================================
 Name        : Ejercicio5.c
 Author      : Dylan Peralta Div K
Ingresar 10 números enteros, distintos de cero. Mostrar:
a. Cantidad de pares e impares.
b. El menor número ingresado.
c. De los pares el mayor número ingresado.
d. Suma de los positivos.
e. Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeros;
	int contadorPares;
	int contadorImpares;
	int menorNumero;
	int mayorNumeroPar;
	int acumuladorPositivos;
	int acumuladorNegativos;
	int contadorNegativos;
	int productoNegativos;

	contadorPares = 0;
	contadorImpares = 0;
	acumuladorPositivos = 0;
	acumuladorNegativos = 0;
	contadorNegativos = 0;

	for(int i = 0 ; i<10 ; i++){
		printf("ingrese un número distinto de cero: ");
		scanf("%d", &numeros);

		if(numeros == 0){
			printf("ERROR, ingrese un número distinto de cero: ");
			scanf("%d", &numeros);
		}

		if(numeros%2==0){
			contadorPares++;
			if(numeros>mayorNumeroPar || contadorPares == 1){
				mayorNumeroPar=numeros;
			}
		}
		else{
			contadorImpares++;
		}


		if(numeros<menorNumero || i == 0){
			menorNumero=numeros;
		}

		if(numeros>0){
			acumuladorPositivos+=numeros;
		}
		else if(numeros<0){
			acumuladorNegativos+=numeros;
			contadorNegativos++;
		}


	}

	productoNegativos = acumuladorNegativos * contadorNegativos;

	printf("La cantidad de números pares es: %d", contadorPares);
	printf("\nLa cantidad de números impares es: %d", contadorImpares);
	printf("\nEl menor número ingresado fue: %d", menorNumero);
	printf("\nEl mayor de los números pares es: %d", mayorNumeroPar);
	printf("\nLa suma de los positivos es: %d", acumuladorPositivos);
	printf("\nEl producto de los negativos es: %d", productoNegativos);

	return EXIT_SUCCESS;
}
