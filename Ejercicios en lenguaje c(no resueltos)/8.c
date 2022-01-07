#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
main() {
	int edad,tiempo,number;
	char sexo;
	edad=int_input("Introducir edad",0,0);
	printf("ingrese sexo(H/M)");
	do{
		int temp;
		number=0;
		scanf(" %c",&sexo);
			if (isdigit(sexo)!= 0)
				number=1;
		if(number==1||sexo!='h'&&sexo!='H'&&sexo!='M'&&sexo!='m'){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras y H/M:");
			}
		}while(number==1||sexo!='h'&&sexo!='H'&&sexo!='M'&&sexo!='m');			
	if(sexo=='H'||sexo=='h')
		sexo='h';
	if(sexo=='M'||sexo=='m')
		sexo='m';
	tiempo=int_input("Introducir timepo del maraton anterior",0,1);
	if(edad<40&&tiempo<=150&&sexo=='h'){
		printf("Seleccionado");}
	else if(edad>=40&&tiempo<=175&&sexo=='h'){
		printf("Seleccionado");}
	else if(tiempo<=180&&sexo=='m'){
		printf("Seleccionado");}
	else 
		printf("No seleccionado");
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