#include <stdio.h>
#include <stdlib.h>

main() {
	int sex,leg,m=0,h=0,sal;
	float sueld;
	do{
		printf("Ingrese numero de legajo");
		scanf("%d",&leg);
		printf("Ingrese sueldo");
		scanf("%f",&sueld);
		printf("Ingrese sexo(f=1/m=2)");
		scanf("%d",&sex);
		if(sex==1&&sueld>500)
			m++;
		if(sex==2&&sueld<400)
			h++;
		printf("Desea terminar e imprimir resultados(1)");
		scanf("%d",&sal);
	}while(sal!=1);
	printf("Mujeres que ganan mas de 500= %d\nHombres que ganan menos de 400= %d",m,h);
}