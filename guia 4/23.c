#include <stdio.h>
#include <stdlib.h>
main(){
	float num1,num2,temp;
	printf("Ingrese numero 1 ");
	scanf("%f",&num1);
	printf("Ingrese numero 2 ");
	scanf("%f",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("numero 1 vale %f\nnumero 2 vale %f",num1,num2);
	
}