/*
 ============================================================================
 Name        : Ejercicio7.c
 Author      : Dylan Peralta Div K
Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	int i;
	char caracteres;
	int contadorDeP;

	contadorDeP = 0;

	for(i = 0; i<5; i++){
		printf("ingresar un caracter: ");
		fflush(stdin);
		scanf("%c", &caracteres);

		if(caracteres == 'p'){
			contadorDeP++;
		}

	}

	if(contadorDeP!=0){
		printf("la cantidad de letras 'p' es: %d", contadorDeP);
	}
	else{
		printf("no hay ningun caracter que sea 'p'");
	}


	return 0;
}
