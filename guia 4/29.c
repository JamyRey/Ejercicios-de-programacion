#include <stdio.h>
#include <stdlib.h>

main() {
	float h,vh,i,d;
	int a;
	char nomb[20];
	
	printf("Ingrese valor hora: \n");
	scanf("%f",&vh);	
	printf("Ingrese nombre: \n");
	scanf(" %s",nomb);
	printf("Ingrese antiguedad: \n");
	scanf("%d",&a);
	printf("Ingrese horas trabajadas al mes: \n");
	scanf("%f",&h);
	i=((h*vh)+(a*30));
	d=(i*0.13);
	printf("%s con %d anos de antiguedad, el valor hora es%.2f\n cobrara en bruto %.2f, se descontara %.2f con un valor neto a cobrar %.2f",nomb,a,vh,i,d,i-d);
	
	
	
	
	
	}