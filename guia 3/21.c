#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	int op;
	float y,pies,pulg,c;
	printf("Ingrese el valor en pies");
	scanf("%f",&pies);
	printf("Seleccione una de las siguientes opciones\n");
	printf("1 Pies a yardas\n");
	printf("2 Pies a pulgadas\n");
	printf("3 Pies a centimetros\n");
	printf("4 pies a metros\n");
	do{
		scanf("%d",&op);
		if(op<1||op>4)
			printf("ERROR, opcion invalida");
	}while(op<1||op>4);
	if(op==1){
	y=pies/3;
	printf("Equivale a %.2f yardas",y);
	}
	if(op==2){
	pulg=pies*12;
	printf("Equivale a %.2f pulgadas",pulg);
	}
	if(op==3){
	pulg=pies*12;
	c= pulg/2.54;
	printf("Equivale a %.2f centimetros",c);
	}
	if(op==4){
	pulg=pies*12;
	c= pulg/2.54;
	printf("Equivale a %.2f metros",c/100);
	}
}