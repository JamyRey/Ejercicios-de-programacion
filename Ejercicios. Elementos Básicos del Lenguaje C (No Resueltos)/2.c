#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites

main(){
	int a,b,c;
	a=int_input("Introducir valor de A",1,1,1);
	b=int_input("Introducir valor de B",1,1,1);
	c=int_input("Introducir valor de C",1,1,1);
	printf("La suma de A,B,C es %d",a+b+c);
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
				printf("ERROR, numero invalido\n");
			}
	}
} 