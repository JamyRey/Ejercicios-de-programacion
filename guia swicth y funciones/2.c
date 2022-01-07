#include <stdio.h>
#include <stdlib.h>

int multiplo(int a, int b);
int int_input(char *msg);
int main(){
	int num1,num2,op;
	num1= int_input("ingrese primer numero: ");
	num2= int_input("ingrese segundo numero: ");
	op= multiplo(num1,num2);
	switch(op){
		case 0:printf("%d es multiplo de %d",num1,num2);
		break;
		default: printf("%d no es multiplo de %d",num1,num2);
		break;
	}
	getche();
}
int multiplo(int a,int b){
	return(a%b);
	
	
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
	
	