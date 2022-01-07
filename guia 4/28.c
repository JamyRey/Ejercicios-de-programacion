#include <stdio.h>
#include <stdlib.h>
main(){
	float a,b,c;
	printf("Ingrese 3 numeros, el primero y ultimo seran los limites");
	printf("\nnumero 1: ");
	scanf("%f",&a);
	printf("\nnumero 2: ");
	scanf("%f",&b);
	printf("\nnumero 3: ");
	scanf("%f",&c);
	if(b>=a&&b<=c)
		printf("%.2f si existe en el intervalo",b);
	else
		printf("%.2f no existe en el intervalo",b);
}