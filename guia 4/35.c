#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
	float al,m=0;
	int sal;
	char nom[20],apell[20],mnom[20],mapell[20];
	do{
		printf("ingrese nombre del alumno ");
		scanf(" %s",nom);
		printf("ingrese apellido del alumno ");
		scanf(" %s",apell);
		printf("ingrese altura del alumnoo ");
		do{
			scanf("%f",&al);
			if(al<0)
				printf("ERROR, no altura negativa");
		}while(al<0);
		if(al>m){
			m=al;
		strcpy(mnom,nom);
		strcpy(mapell,apell);
			}
		printf("desea salir?(1)");
		scanf("%d",&sal);
	}while(sal!=1);
	printf("El alumno mas alto, %s %s tiene %f de altura",mnom,mapell,m);
}