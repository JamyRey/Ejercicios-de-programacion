#include <stdio.h>
#include <stdlib.h>

main(){
	int a;
	printf("Ingrese un numero ");
	scanf("%d",&a);
	if(a%2==0)
		printf("este numero es par",a);
	else
		printf("este numero es impar",a);	
}