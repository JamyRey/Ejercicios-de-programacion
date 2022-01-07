#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
float float_input(char *msg,int min);
main(){
	float r,a,l;
	r=float_input("Ingrese el radio de la circunferencia",1);
	l=2*PI*r;
	a=(r*r)*PI;
	printf("La logitud es %.2f, con un area de %.2f",l,a);
}
float float_input(char *msg,int min){
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
			if(input>=min)
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}