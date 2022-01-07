#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	float a,b,c,d,r1,r2;
	printf(" Introducir primer valor ");
	scanf("%f",&a);
	printf(" Introducir segundo valor ");
	scanf("%f",&b);
	printf(" Introducir tercer valor ");
	scanf("%f",&c);
	d=sqrt((b*b)-(4*a*c));
	r1=((-b+d)/(2*a));
	r2=((-b-d)/(2*a));
	if(d>-1)
	printf("Las raices reales son: %f y %f ",r1,r2);
	else
	printf("ERROR, la raiz cuadrada es negativa");

}