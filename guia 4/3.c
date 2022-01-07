#include <stdio.h>
#include <stdlib.h>

main() {
	int i,c=0;
	float num;
	for(i=1;i<=10;i++){
	num=0;
	printf("Ingrese numero: %d ",i);
	scanf("%f",&num);
	if(num>0)
		c++;
	}
	printf("Hay %d mayores que 0 y %d menores a 0",c,10-c);

	}