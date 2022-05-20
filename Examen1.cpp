/*Autor: Ricardo Jafet Granados Chable, Realizado: 10/03/2022
	Examen de primer parcial - Ejercicio 1 
	*/

#include<stdio.h>
#include<math.h>

int main() {
	float a, radio, g;
	printf("Introduce el radio del cono: ");
	scanf("%f",&radio);
	printf("Introduce la generatriz del cono: ");
	scanf("%f",&g);
	a = M_PI*radio*(g+radio);
	printf("El area del cono es: %f", a);
	return 0;
}
