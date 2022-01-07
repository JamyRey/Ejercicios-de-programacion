#include <stdio.h>
#include <stdlib.h>

main() {
	float asig,deduc,mensual,menaum= 0;
	int edad;
	char nomb[20],apell[20],sex;
	
	printf("Ingrese nombre y apellido: ");
	scanf("%s %s",nomb,apell);
	printf("Ingrese su edad");
	scanf("%d",&edad);
	printf("Ingrese su sexo(H/M)");
	getchar();
	sex=getchar();
	printf("Ingrese monto de asignaciones mensuales:");
	scanf("%f",&asig);
	printf("Ingrese monto de deducciones mensuales");
	scanf("%f",&deduc);
	mensual = asig-deduc;
	menaum= mensual+(mensual*0.3);
	printf("%s %s, su sueldo neto mensual es %f, su nuevo sueldo con el aumento es %f",nomb,apell,mensual,menaum);
	getche();	
}