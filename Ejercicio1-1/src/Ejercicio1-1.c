/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : Dylan Peralta Div k
Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
El promedio de los números positivos.
El promedio de los números negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	char respuesta;
	int numeroIngresado;
	int contadorPositivos;
	int acumuladorPositivos;
	int contadorNegativos;
	int acumuladorNegativos;
	float promedioPositivos;
	float promedioNegativos;

	acumuladorNegativos = 0;
	acumuladorPositivos = 0;
	contadorNegativos = 0;
	contadorPositivos = 0;


	do{
		printf("ingresa un numero: ");
		scanf("%d", &numeroIngresado);

		if(numeroIngresado == 0){
		printf("\nIngrese un numero entero distinto de 0: ");
		scanf("%d", &numeroIngresado);
		}
		else
		{
		if(numeroIngresado > 0){
			acumuladorPositivos = acumuladorPositivos + numeroIngresado;
			contadorPositivos++;
	   	}else{
				acumuladorNegativos = acumuladorNegativos + numeroIngresado;
				contadorNegativos++;
			}
		}

		printf("desea ingresar otro numero? s/n: ");
		setbuf(stdin, NULL);
		scanf("%c", &respuesta);

	}while(respuesta == 's');


	if(contadorPositivos > 0)
	{
		promedioPositivos = (float)acumuladorPositivos / contadorPositivos;
		printf("\nEl promedio de numeros positivos es: %.2f ", promedioPositivos);
	}
	else
	{
		printf("\nNo se ingresaron numeros positivos.");
	}

	if(contadorNegativos > 0)
	{
		promedioNegativos = (float)acumuladorNegativos / contadorNegativos;
		printf("\nEl promedio de negativos es: %.2f", promedioNegativos);
	}
	else
	{
		printf("\nNo se ingresaron numeros negativos.");
	}

	return 0;
}
