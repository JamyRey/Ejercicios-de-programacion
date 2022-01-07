#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int int_input(char *msg,int min);
float area(int l);
main() {
	int l1;
	printf("Ingrese lados:\n");
	l1=int_input("Ingresando lado 1:",1);
	printf("El area del cuadrado inscrito son:%.2fm cuadrados\n",area(l1));
	


	getche();	
}
int int_input(char *msg,int min){
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
			if((input>=min))
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}
float area(int l){
	float l2,x2,x1,x,h;	
	x2=(-4);
	x1=+(l*2);
	x=(-x1/x2);
	h=((4-x)*(4-x))+(x*x);
	l2=sqrt(h)*sqrt(h);
	return(l2);	
}