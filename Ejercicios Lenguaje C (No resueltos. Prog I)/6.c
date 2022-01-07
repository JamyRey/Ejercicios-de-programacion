#include <stdio.h>
#include <stdlib.h>

float float_input(char *msg);
 main(){
 	float c,f;
 	c=float_input("ingrese grados centigrados ");
 	f=(c*9/5)+32;
  	printf("%.2f Centigrados es equivalente a %.2f Fahrenheit",c,f);
  	getche();
 
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
		printf("Entrada invalida... ingrese un numero:\n");
		scan = scanf("%f", &input);
	}		
		return(input);
		}
	}
