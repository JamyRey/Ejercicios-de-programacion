#include <stdio.h>
#include <stdlib.h>

main(){
	float p,c;
	printf("ingrese pulgadas a convertir ");
	scanf("%f",&p);
	c=p/2.54;
	printf("%.2f pulgadas es igual a %.2f centimetros",p,c);
}