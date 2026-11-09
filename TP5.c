/*
* TP5 - Ejercicio 1
* Repositorio GitHub: https://github.com/ruizfederico5045-gif/trabajo-TP4
*/

#include <stdio.h>

int main() {
	int num_estudiantes;
	float calificacion;
	float suma = 0.0;
	float max_calificacion, min_calificacion;
	
	// a) Validar que la cantidad de estudiantes sea un numero positivo (> 0)
	do {
		printf("Ingrese la cantidad de estudiantes a evaluar: ");
		if (scanf("%d", &num_estudiantes) != 1 || num_estudiantes <= 0) {
			printf("Error: La cantidad de estudiantes debe ser un numero positivo mayor a 0.\n");
			while (getchar() != '\n');
		} else {
			break;
		}
	} while (1);
	
	// b) Recorrer para ingresar las calificaciones de cada estudiante
	for (int i = 1; i <= num_estudiantes; i++) {
		// c) Validar que la calificacion este en el rango [0, 100]
		do {
			printf("Ingrese la calificacion del estudiante %d (0-100): ", i);
			if (scanf("%f", &calificacion) != 1 || calificacion < 0.0f || calificacion > 100.0f) {
				printf("Error: La calificacion debe estar entre 0 y 100.\n");
				while (getchar() != '\n');
			} else {
				break;
			}
		} while (1);
		
		suma += calificacion;
		
		// d) Registrar maxima y minima calificacion
		if (i == 1) {
			max_calificacion = calificacion;
			min_calificacion = calificacion;
		} else {
			if (calificacion > max_calificacion) {
				max_calificacion = calificacion;
			}
			if (calificacion < min_calificacion) {
				min_calificacion = calificacion;
			}
		}
	}
	
	// e) Calcular e imprimir el promedio con dos decimales
	float promedio = suma / num_estudiantes;
	printf("\n--- RESULTADOS ---\n");
	printf("Promedio de calificaciones: %.2f\n", promedio);
	
	// f) Imprimir calificacion mas alta y mas baja
	printf("Calificacion mas alta: %.2f\n", max_calificacion);
	printf("Calificacion mas baja: %.2f\n", min_calificacion);
	
	return 0;
}
