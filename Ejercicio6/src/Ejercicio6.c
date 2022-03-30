/*
 ============================================================================
 Name        : Ejercicio6.c
 Author      : Dylan Peralta Div K
Debemos alquilar el servicio de transporte para llegar a Mar
del Plata con un grupo de personas, de cada persona
debemos obtener los siguientes datos:
número de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	char respuesta;
	int numeroCliente;
	char estadoCivil;
	int edad;
	float temparatura;
	char genero;
	int contadorViudo;
	int flagMujerMasJoven;
	int numeroClienteMasJoven;
	int edadMujerMasJoven;
	int precioViaje;
	int contadorPasajeros;
	int totalViaje;
	int contadorMayores;
	int precioFinalConDescuento;
	int decuentoTotal;

	contadorViudo = 0;
	precioViaje = 600;
	contadorPasajeros = 0;
	contadorMayores = 0;
	decuentoTotal = 0;
	flagMujerMasJoven = 0;

	do{
		printf("igresa el número de cliente: ");
		scanf("%d", &numeroCliente);

		printf("ingresa el estado civil unsando 's' para soltero, 'c' para casado o 'v' viudo: ");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v'){
				printf("ERROR, ingrese un caracter valido unsando 's' para soltero, 'c' para casado o 'v' viudo: ");
				fflush(stdin);
				scanf("%c", &estadoCivil);
		}

		printf("ingrese la edad: ");
		scanf("%d", &edad);
		while(edad<18){
			printf("ERROR, ingrese una edad que sea mayor a 17: ");
			scanf("%d", &edad);
		}

		printf("ingrese la temperatura del cliente: ");
		scanf("%f", &temparatura);
		while(temparatura < 35 || temparatura > 41){
			printf("ingrese una temperatura valida entre 35 y 41: ");
			scanf("%f", &temparatura);
		}

		printf("ingresar el genero usando 'f' para femenino, 'm' para masculino, 'o' para no binario: ");
		fflush(stdin);
		scanf("%c", &genero);
		while(genero!='f' && genero!='m' && genero!='o'){
			printf("ingresar el genero valido usando 'f' para femenino, 'm' para masculino, 'o' para no binario: ");
			fflush(stdin);
			scanf("%c", &genero);
		}

		if(estadoCivil == 'v' && edad > 60){
			contadorViudo++;
		}

		if(estadoCivil == 's' && genero == 'f'){
			if(edad<edadMujerMasJoven || flagMujerMasJoven == 0){
				edadMujerMasJoven = edad;
				numeroClienteMasJoven = numeroCliente;
				flagMujerMasJoven = 1;
			}
		}

		if(edad>60){
			contadorMayores++;
		}
		printf("Desea ingresar otro pasajero?: ");
		fflush(stdin);
		scanf("%c", &respuesta);

		contadorPasajeros++;

	}while(respuesta == 's');

	totalViaje = precioViaje * contadorPasajeros;

	if(contadorMayores>(contadorPasajeros*0.5)){
		precioFinalConDescuento = totalViaje * 0.5;
		decuentoTotal = 1;
	}

	if(contadorViudo>0){
		printf("La cantidad de personas viudas con mas de 60 años es: %d", contadorViudo);
	}
	else{
		printf("no hubo personas viudas con mas de 60 años");
	}
	if(flagMujerMasJoven>0){
	printf("\nEl número de cliente de la mujer soltera mas joven es %d y su edad es %d", numeroClienteMasJoven,edadMujerMasJoven);
	}
	else{
		printf("\nNo hay mujeres solteras");
	}

	printf("\nEl precio total del viaje sin descuento es %d", totalViaje);
	if(decuentoTotal > 0){
		printf("\nEl precio final con descuento seria: %d", precioFinalConDescuento);
	}
	else{
		printf("\nLos mayores de 60 no superan al 50 porciento de los pasajeros");
	}

	return EXIT_SUCCESS;
}

/*
a) La cantidad de personas con estado "viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años ,el precio final tiene un descuento del 25%,
que solo mostramos si corresponde.
*/



