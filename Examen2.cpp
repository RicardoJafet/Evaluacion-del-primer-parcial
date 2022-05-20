/*Autor: Ricardo Jafet Granados Chable, Realizado: 10/03/2022
	Examen de primer parcial - Ejercicio 2
	*/

#include<stdio.h>
#include<math.h>

int main() {
	float a, radio, g;
	do{
	printf("\nIntroduce el radio del cono: ");
	scanf("%f",&radio);
	if (radio<0){
		printf("\nPorfavor introduzca un numero positivo");
	}else{
		a = M_PI*radio*(g+radio);
	}
	printf("\nIntroduce la generatriz del cono: ");
	scanf("%f",&g);
	if (g<0){
		printf("\nPorfavor introduzca un numero positivo");
	}else{
		a = M_PI*radio*(g+radio);
	}
	printf("\nEl area del cono es: %f", a);	
	}while(radio<0 && g<0);
	return 0;
}
