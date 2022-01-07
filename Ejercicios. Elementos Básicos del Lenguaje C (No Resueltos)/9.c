#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int ig,int min);

main(){
	int edd;
	edd=int_input("introduce tu edad",0,1);
	if(edd>21)
	printf("1");
	else
	printf("0");
	
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