#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main() {
	int sal,c=0;
	float sueld,h,th,min,max;
	char nom[20],nomax[20],nomin[20];
		min=9999999;
		max=0;
	do{
		printf("ingrese nombre\n");
		scanf(" %s",nom);
		printf("Ingrese tarifa horaria\n");
		scanf("%f",&th);
		printf("Ingrese horas trabadas en la semana\n");
		scanf("%f",&h);
		sueld=th*h;
		printf("Su salario semanal es %f\n",th*h);
		if(sueld>max){
		strcpy(nomax,nom);
		max=th*h;
		}
		if(sueld<min){
		strcpy(nomin,nom);
		min=th*h;
		}
		c++;
		printf("Desea terminarde introducir datos(1)");
		scanf("%d",&sal);
	}while(sal!=1);
	printf("se ha contado %d empleados\n",c);
	printf("El mayor salario %f es de %s\nEl menor salario %f es de %s",max,nomax,min,nomin);
}