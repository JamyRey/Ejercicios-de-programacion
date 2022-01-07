#include <stdio.h>
#include <stdlib.h>


main() {
	float gluz,gagua,gtelf,gcondo,quince,mensual;
	char nomb[20];
	
	printf("Ingrese nombre: ");
	scanf("%s",nomb);

	printf("Ingrese monto de gastos mensuales de luz: ");	
	scanf("%f",&gluz);
	printf("Ingrese monto de gastos semanales de agua: ");	
	scanf("%f",&gagua);
	printf("Ingrese monto de gastos semanales de telefono: ");	
	scanf("%f",&gtelf);
	printf("Ingrese monto de gastos mensuales del condomino: ");	
	scanf("%f",&gcondo);
	mensual= gluz+gagua+gtelf+gcondo;
	quince =mensual/2; 
	printf("Hola %s, su gasto mensual en servicioes es %f \n Su gasto quincenal es :%f ",nomb,mensual,quince);
	getche();	
}