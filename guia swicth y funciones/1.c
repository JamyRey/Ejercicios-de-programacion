#include <stdio.h>
#include <stdlib.h>

void limite(float a);
float float_input(char *msg);
main(){
	float n;
	n= float_input("ingrese numero: ");
	limite(n);
	getche();
}
void limite(float a){
	int op;
	if(a>=100 &&a<=200)
	op=1;
	else
	op=2;
	switch(op){
		case 1: printf("El numero %f entra en los limites predeterminados",a);
		break;
		case 2: printf("El numero %f no entra en los limites predeterminados",a);
		
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