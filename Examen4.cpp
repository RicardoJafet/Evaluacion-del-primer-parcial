/*Autor: Ricardo Jafet Granados Chable, Realizado: 10/03/2022
	Examen de primer parcial - Ejercicio 3
	*/

#include<stdio.h>
#include<math.h>
void Examen1();

int main(){
	int i;
	do {
		printf("\Selecciona una opcion: ");
		printf("\n1. Area del cono ");		
		printf("\n0. Salir ");
		scanf("%d",&i);
		switch (i){
			case 0: printf("\Hasta la proxima!");
			break;
			case 1: Examen1();
			break;
		default: printf("\nOpcion invalida!");
		}
	}while(i!=0);
	return 0;
}
void Examen1(){
	float a, radio, g;
	printf("Introduce el radio del cono: ");
	scanf("%f",&radio);
	printf("Introduce la generatriz del cono: ");
	scanf("%f",&g);
	a = M_PI*radio*(g+radio);
	printf("El area del cono es: %f", a);
}
