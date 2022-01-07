#include <stdio.h>
#include <stdlib.h>

float vabs(float a);
float float_input(char *msg);
main() {
	float num;
	num=float_input("ingrese numero real: ");
	printf("El valor absoluto de %f es %f",num,vabs(num));

}
float vabs(float a){
	if(a>=0){
		return(a);
	}
	if(a<0){
		return(-a);
	}
}
float float_input(char *msg){
	int temp,scan;
	float input;
	while(1)
	{
		printf("%s",msg);
		scan= scanf("%f",&input);
		while(scan!=1){
		while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese un numero: ");
			scan = scanf("%f", &input);
		}	
	return input;	
	}
}