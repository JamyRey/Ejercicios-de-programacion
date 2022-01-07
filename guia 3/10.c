#include <stdio.h>
#include <stdlib.h>

main(){
	float x,y,z,v;
	printf("Ingrese el primer numero ");
	scanf("%f",&x);
	printf("Ingrese el segundo numero ");
	scanf("%f",&y);
	z=(x+y)/2;
	v=x*y-2+x;
	printf("Los resultados son \nz=%f\nv=%f",z,v);
	
}