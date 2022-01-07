#include <stdio.h>
#include <stdlib.h>
main(){
	int p,c,co=0,sal;
	do{
		printf("ingrese peso del empleado");
		scanf("%d",&p);
		if(p<=80&&p>0)
			c++;
		else if(p>80)
			co++;
		printf("Desea terminar de ingresar empleados?(1)");	
			scanf("%d",&sal);
	}while(sal!=1);
	printf("Empleados hasta 80Kg= %d\nEmpleados mas de 80Kg= %d",c,co);
}