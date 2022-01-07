#include <stdio.h>
#include <stdlib.h>

main(){
	float a,b,c,p;
	printf("Ingrese lados del triangulo\n");
	printf("Lado a:");
	scanf(" %f",&a);
	printf("Lado b:");
	scanf(" %f",&b);
	printf("Lado c:");
	scanf(" %f",&c);
	p= (a+b+c)/2;
	printf("Los daos de su trinangulo son %.2f, %.2f, %.2f dando un perimetro de %.2f",a,b,c,p);
}
