#include <stdio.h>
#include <stdlib.h>

main() {
	float pies,pulg,c;
	printf("Ingrese el valor en centimetros");
	scanf("%f",&c);
	pulg=c*2.54;
	pies=pulg/12;
	printf("%.1f cm son %.1f pies y %.1f pulgadas",c,pies,pulg);
}