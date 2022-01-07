#include <stdio.h>
#include <stdlib.h>

float float_input(char *msg,int max);
 main(){
 	float n1,n2;
 	n1=float_input("ingrese numero 1 ",999);
	n2=float_input("ingrese numero 2 ",999); 
	printf("\t%.2f\n\t%.2f\n\t------\n\t%.2f",n1,n2,n1-n2);
  	getche();
 
 }
float float_input(char *msg,int max){
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
			if(input<=max)
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}