#include <stdio.h>
#include <stdlib.h>
//programa que calcula el sueldo
main() {
	float asig,deduc,mensual,quince,sema= 0;
	int edad;
	char nomb[20],apell[20];
	
	printf("Ingrese nombre y apellido: ");
	scanf("%s %s",nomb,apell);
	printf("Ingrese su edad");
	scanf("%d",&edad);
	printf("Ingrese monto de asignaciones mensuales:");
	scanf("%f",&asig);
	printf("Ingrese monto de deducciones mensuales");
	scanf("%f",&deduc);
	mensual = asig-deduc;
	quince =mensual/2; //(mensual/30)*15;
	sema = (mensual*12)/52;	
	printf("Hola %s %s, de edad %d su sueldo mensual es: %f \nel quincenal es:%f \nel semanal es:%f",nomb,apell,edad,mensual,quince,sema);
	getche();	
}