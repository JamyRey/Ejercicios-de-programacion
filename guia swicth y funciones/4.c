#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int a);
int int_input(char *msg);
int main(){
int n,nt;
float e=1;
n=int_input("Ingrese valor de la potencia de \"e\": ");
nt=n;
while(nt>=1){
		e +=(pow(n,nt)/fact(nt));
		nt--;	
	}
printf("%f",e);

}
int fact(int a){
	int b=a;
	int total=1;
	while(b>1){
		total *=b;
		b--;		
	}
	return(total);
	
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
	
	