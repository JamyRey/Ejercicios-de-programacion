#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int ig,int min);

main(){
	int a;
	a=int_input("Introducir segundos",0,0);
	printf("%d es igual a %d en segundos",a,a/60);
}
int int_input(char *msg,int ig,int min){
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
			if(input>=min||ig==1)
				return input;		
			else{
				printf("ERROR, numero invalido\n");
			}
	}
} 