/*
* TP3 Modificado (TP5 - Punto 2)
* Repositorio GitHub: https://github.com/ruizfederico5045-gif/trabajo-TP4
*/

#include <stdio.h>

int main() {
	float peso, altura, imc;
	
	// Validacion de ingreso de peso (no se permiten numeros negativos ni cero)
	do {
		printf("Ingrese el peso en kg: ");
		if (scanf("%f", &peso) != 1 || peso <= 0) {
			printf("Error: El peso debe ser un numero positivo mayor a 0.\n");
			while (getchar() != '\n');
		} else {
			break;
		}
	} while (1);
	
	// Validacion de ingreso de altura (no se permiten numeros negativos ni cero)
	do {
		printf("Ingrese la altura en metros: ");
		if (scanf("%f", &altura) != 1 || altura <= 0) {
			printf("Error: La altura debe ser un numero positivo mayor a 0.\n");
			while (getchar() != '\n');
		} else {
			break;
		}
	} while (1);
	
	// Calculo del Indice de Masa Corporal
	imc = peso / (altura * altura);
	
	// Determinar condicion de acuerdo al IMC
	char *condicion;
	if (imc < 18.5) {
		condicion = "Bajo peso";
	} else if (imc <= 24.9) {
		condicion = "Normal";
	} else if (imc <= 29.9) {
		condicion = "Sobrepeso";
	} else {
		condicion = "Obesidad";
	}
	
	// Mostrar el resultado con dos decimales
	printf("\nSu indice de masa corporal es: %.2f\n\n", imc);
	
	// Mostrar la tabla de referencia
	printf("    Indice    |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5     |  Bajo peso\n");
	printf(" 18.5 a 24.9  |  Normal\n");
	printf(" 25.0 a 29.9  |  Sobrepeso\n");
	printf("     >=30     |  Obesidad\n\n");
	
	// Indicacion de la condicion del usuario tras la tabla
	printf("Usted se encuentra en la condicion de: %s\n", condicion);
	
	return 0;
}
