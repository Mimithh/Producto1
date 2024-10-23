#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Programa para el cálculo total con impuestos y deducciones
int main() {

	//variables
	float salario_base, impuestos, deducciones, salario_neto;

	// Entrada de datos
	printf("Introduce el salario base: \n");
	scanf_s("%f", &salario_base);

	//Calculamos los impuestos.
	printf("Introduce el impuestos: \n");
	scanf_s("%f", &impuestos);
	impuestos = impuestos * salario_base;

	//Calculamos deducciones
	printf("Introduce las deducciones: \n");
	scanf_s("%f", &deducciones);
	deducciones = deducciones * salario_base;

	//Calcular el salario total
	salario_neto = salario_base - impuestos - deducciones;
	// Mostrar el salario base ingresado
	printf("\nSalario base introducido: %.2f\n", salario_base);

	printf("\nImpuestos: %.2f\n", impuestos);
	printf("\nDeducciones: %.2f\n", deducciones);
	printf("\nSalario total: %.2f\n", salario_neto);

	return 0;


}
