#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float pitagoras(int op, float a,float b);
float float_input(char *msg);
int main(){
	int opc;
	float num1,num2;
	printf("Elija opcion\n");
	printf("1-Hipotenusa\n");	
	printf("2-cateto adyacente\n");	
	printf("3-cateto opuesto\n");
	scanf("%d",&opc);
	switch(opc){
		case 1:	num1=float_input("ingrese cateto adyacente\n");
		num2=float_input("ingrese cateto opuesto\n");
		break;
		case 2: num1=float_input("ingrese hipotenusa\n");
		num2=float_input("ingrese cateto opuesto\n");
		break;
		case 3:num1=float_input("ingrese hipotenusa\n");
		num2=float_input("ingrese cateto adyacente\n");
		break;
		default: printf("ERROR, ingrese una opcion valida");
		break;	
	}
	if(pitagoras(opc,num1,num2)<=500){
		printf("El valores igual a: %f",pitagoras(opc,num1,num2));
	}
	else
		printf("El valor supera los 500");
	
	getche();	
}
float pitagoras(int op, float a,float b){
	if(op==1)
		return(sqrt(pow(a,2)+pow(b,2)));
	if(op>=2&&op<=3)
		return(sqrt(pow(a,2)-pow(b,2)));	
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