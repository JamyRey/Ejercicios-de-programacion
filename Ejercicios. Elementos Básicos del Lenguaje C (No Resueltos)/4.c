#include <stdio.h>
#include <stdlib.h>

float float_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites

main(){
	float b,h;
	b=float_input("introduzca base: ",1,0,1);
	h=float_input("\ntintroduzca altura:",1,1,1);
	printf("Un triangulo rectangulo de altura %f y base %f, tiene un area de %f",h,b,(b*h)/2);
}
float float_input(char *msg,int ig,int min,int max){
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
			if((input>=min && input<=max)||ig==1)
				return input;		
			else{
				printf("ERROR, numero invalido\n");
			}
	}
} 