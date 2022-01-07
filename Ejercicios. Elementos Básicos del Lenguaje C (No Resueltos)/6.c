#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415


main(){
	//Declaracion de variables
	int i1, i2, i3;
	float r1, r2, r3;
	//asigaciones de variables
	i1=12;
	i2=5;
	r1=12.0;
	r2 =5;
	//operaciones
	r3=r1/r2;
	printf("r3=r1/r2 igual a %f\n",r3);
	r3=i1/i2;
	printf("r3=i1/i2 igual a %f\n",r3);
	i3=i1/r2;
	printf("i3=i1/r2 igual de %d\n",i3);
}
