#include <stdio.h>
#include <stdlib.h>

main() {
	float a;
	int i;
	printf("Ingrese numero a multiplicar");
	scanf("%f",&a);
	for(i=1;i<=10;i++){
		printf("%.1fx%d=%.1f\n",a,i,a*i);
	}
}