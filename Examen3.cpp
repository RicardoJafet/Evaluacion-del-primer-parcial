/*Autor: Ricardo Jafet Granados Chable, Realizado: 10/03/2022
	Examen de primer parcial - Ejercicio 3
	*/

#include<stdio.h>
#include<math.h>
int main(){
	float a, radio, g;
	int i;
	do {
		do {
			printf("\nPorfavor introduce el radio del cono: ");
		    scanf("%f",&radio);
		}while(radio<=0);
		do {
		printf("\nPorfavor introduce la generatriz del cono: ");
		scanf("%f",&g);	
		}while(g<=0);
		a = M_PI*radio*(g+radio);
		printf("\nEl area del cono es: %f", a);
		printf("\nRealizar mas?   1.si,   2.no");
		scanf("%d",&i);
	}while(i!=2);
	return 0;
}
