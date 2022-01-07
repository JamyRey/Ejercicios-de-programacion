#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites

main() {
	int ano,a,b,c,d,sal;
	do{
	ano=int_input("Ingrese anio a calcular ",0,1,9999);
	a=ano%19;
	b=ano%4;
	c=ano%7;
	d=(19*a+24)%30;
	printf("Pascua %d\nEmpieza el %d\n",ano,d);
	sal=int_input("Desea salir(1) ",1,1,1);
	}while(sal!=1);
}
int int_input(char *msg,int ig,int min,int max){
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
				printf("ERROR, numero invalido");
			}
	}
}