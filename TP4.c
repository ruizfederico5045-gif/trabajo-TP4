#include <stdio.h>

int main() {
	float peso, altura, imc;
	char* condicion = "";
	
	printf("Ingrese el peso en kg: ");
	if (scanf("%f", &peso) != 1 || peso <= 0) {
		printf("Error: Ingrese un valor de peso valido.\n");
		return 1;
	}
	
	printf("Ingrese la altura en metros: ");
	if (scanf("%f", &altura) != 1 || altura <= 0) {
		printf("Error: Ingrese un valor de altura valido.\n");
		return 1;
	}
	
	imc = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n\n", imc);
	
	printf("    Indice    |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5     |  Bajo peso\n");
	printf(" 18.5 a 24.9  |  Normal\n");
	printf(" 25.0 a 29.9  |  Sobrepeso\n");
	printf("     >=30     |  Obesidad\n\n");
	
	if (imc < 18.5) {
		condicion = "Bajo peso";
	} else if (imc >= 18.5 && imc <= 24.9) {
		condicion = "Normal";
	} else if (imc >= 25.0 && imc <= 29.9) {
		condicion = "Sobrepeso";
	} else {
		condicion = "Obesidad";
	}
	
	printf("Usted se encuentra en la condicion de: %s\n", condicion);
	
	return 0;
	
	
}
