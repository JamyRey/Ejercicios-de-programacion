#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

main(){
	float r,a,l;
	printf("Ingrese el radio de la circunferencia");
	scanf("%f",&r);
	l=2*PI*r;
	a=(r*r)*PI;
	printf("La logitud es %.2f, con un area de %.2f",l,a);
}