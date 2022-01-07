#include <stdio.h>
#include <stdlib.h>
float float_input(char *msg,int ig,int min,int max);

main(){
	float n;
	n=float_input("Introduzca su nota del 0 al 10 ",0,0,10);
	if(n<5)
		printf("suspendido");
	if(n>=5&&n<7)
		printf("aprobado");
	if(n>=7&&n<9)
		printf("notable");
	if(n==9)
		printf("Sobresaliente");
	if(n==10)
		printf("Matricula de honor");


}


float float_input(char *msg,int ig,int min,int max){
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
			if((input>=min && input<=max)||ig==1)
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}