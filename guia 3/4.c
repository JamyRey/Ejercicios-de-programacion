#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
 main() {
	float radio,area;
	printf("Ingrese radio:");
	scanf("%f",&radio);
	area= PI*radio*radio;
	printf(" dado el radio %f: area es %f",radio,area);
	getche();
	}