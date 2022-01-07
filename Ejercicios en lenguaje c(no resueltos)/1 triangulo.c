#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {	
float base,altura,area;
printf("Ingrese los siguientes datos para calcular el area de un triangulo\n");
printf("base: ");
scanf("%f",&base);
printf("altura: ");
scanf("%f",&altura);
area= (base*altura)/2;
printf("El area del triangulo es: %f",area);

getche( );
	}