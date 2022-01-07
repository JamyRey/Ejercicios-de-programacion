#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
	float al,m=0,p,n;
	int sal,i;
	char nom[20];
	do{
		p=0;
		printf("ingrese nombre del alumno ");
		scanf(" %s",nom);
		for(i=1;i<=6;i++){
		printf("ingrese nota %d ",i);		
		do{
			scanf("%f",&n);
			if(n<1||n>20)
				printf("ERROR, notas del 1 al 20 ");
		}while(n<1||n>20);
		p=p+n;
		}
		printf("%s, tiene un promedio de %.2f",nom,p/6);
		printf("desea seguir con otro alumno?(1)");
		scanf("%d",&sal);
	}while(sal==1);
}