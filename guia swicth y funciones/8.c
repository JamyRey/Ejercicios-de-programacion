#include <stdio.h>
#include <stdlib.h>

void collatz(int a);
int int_input(char *msg);

main() {
	int num;
	printf("Ingrese numero: ");
	do{
		num=int_input("");
		if(num<1)
			printf("ERROR, no se admiten numeros negativos ni 0\n");
	}while(num<1);
	collatz(num);

getche();
}
void collatz(int a){
	while(a!=1){
		if(a%2==0){
			a=a/2;
			}
		else{
			a=a*3+1;
			}		
		printf("%d, ",a);
		
	}
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
	
	

	
	
