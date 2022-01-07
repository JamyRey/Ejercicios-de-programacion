#include <stdio.h>
#include <stdlib.h>

main() {
	int sal;
	float sueld,h,th;
	char nom[20];
	do{
		printf("ingrese nombre\n");
		scanf(" %s",nom);
		printf("Ingrese tarifa horaria\n");
		scanf("%f",&th);
		printf("Ingrese horas trabadas en la semana\n");
		scanf("%f",&h);
		printf("Su salario semanal es %f\n",th*h);

		printf("Desea terminarde introducir datos(1)");
		scanf("%d",&sal);
	}while(sal!=1);
}