#include <stdio.h>
#include <stdlib.h>

main() {
	float num1,num2,num3,num4,num5,media;
	printf("Ingrese numero1:");
	scanf("%f",&num1);
	printf("Ingrese numero2:");
	scanf("%f",&num2);
	printf("Ingrese numero3:");
	scanf("%f",&num3);
	printf("Ingrese numero4:");
	scanf("%f",&num4);
	printf("Ingrese numero5:");
	scanf("%f",&num5);
	media = (num1+num2+num3+num4+num5)/5;
	printf("la media es: %.2f",media);
	getche();
}