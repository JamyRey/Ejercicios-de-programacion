#include <stdio.h>
#include <stdlib.h>

main() {
	float num,numc;
	printf("Ingrese numero para calcular su cuadrado");
	scanf("%f",&num);
	numc=num*num;
	if(numc>0)
		printf("el cuadrado es%.2f",numc);
	else
		printf("ERROR, el numero debe se mayor a 0");
}