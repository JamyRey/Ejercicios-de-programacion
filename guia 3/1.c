#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg);
main() {
	int num1,num2;
	printf("Ingrese numeros:\n");
	num1=int_input("Ingresando numero 1: ");
	num2=int_input("Ingresando numero 2: ");
	printf("La suma de esos dos numeros es: %d \n",num1+num2);
	printf("La resta de esos dos numeros es: %d \n",num1-num2);
	printf("La multiplicacion de esos dos numeros es: %d",num1*num2);
	getche();	
}
int int_input(char *msg){
	int input,temp,scan;
	while(1)
	{
		printf("%s",msg);
		scan= scanf("%d",&input);
		while(scan!=1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Entrada invalida... ingrese un numero: ");
		scan = scanf("%d", &input);
	}		
			return input;		

	}
}