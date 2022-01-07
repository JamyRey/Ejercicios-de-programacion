#include <stdio.h>
#include <stdlib.h>

main() {
	float a,b,c;
	printf(" Introducir primer numero ");
	scanf("%f",&a);
	printf(" Introducir segundo numero ");
	do{
	scanf("%f",&b);
	if(b==a)
		printf("ERROR, no puedes poner numeros iguales");
	}while(a==b);
	printf(" Introducir tercer numero ");
	do{
	scanf("%f",&c);
	if(c==a)
		printf("ERROR, no puedes poner numeros iguales");
	if(c==b)
		printf("ERROR, no puedes poner numeros iguales");
	}while(c==b||c==b);
	if(a>b&&a>c)
	printf("%f es el mayor",a);
	if(b>a&&b>c)
	printf("%f es el mayor",b);
	if(c>a&&c>b)
	printf("%f es el mayor",c);
	
	
	
	}