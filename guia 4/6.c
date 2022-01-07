#include <stdio.h>
#include <stdlib.h>

main(){
	float a;
	printf("Ingrese un numero ");
	scanf("%f",&a);
	if(a>=0)
		printf("este numero es positivo",a);
	else
		printf("este numero es negativo",a);	
}