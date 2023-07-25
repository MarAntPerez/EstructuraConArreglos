#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct perro{
	
	char nombre[15];
	int edadMeses;
	float peso;
	
}perros[2];

int main(int argc, char *argv[]) {
	
	int contador = 0;
	
	for(contador=0; contador<2; ++contador){
		
		printf("Ingresa el nombre del perro: ", contador+1);
		scanf("%s", &perros[contador].nombre);
		printf("Ingresa la edad del perro en meses: ");
		scanf("%i", &perros[contador].edadMeses);
		printf("Ingresa el peso del perro: ");
		scanf("%f", &perros[contador].peso);
		printf("\n");
		
	}
	
	for(contador=0; contador<2; ++contador){
		
		printf("El nombre del perro es: %s\n", perros[contador].nombre);
		printf("La edad del perro es: %i\n", perros[contador].edadMeses);
		printf("El peso del perro es: %.2f\n", perros[contador].peso);
		printf("\n");
		
	}
	
	return 0;
}
