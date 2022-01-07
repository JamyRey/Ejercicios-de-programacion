#include <stdio.h>
#include <stdlib.h>

float interes(float num1,float num2,float num3);
int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites
float float_input(char *msg,int ig,int min,int max);

 int main(){
 char nom[20];
 int edd,sal,c,number;
 float m,t,tiem,sm,i;
 
 do {
	printf("Ingrese los siguientes datos:\n");
	printf("nombre \n");
	do{
		int temp;
		number=0;
		scanf("%s",nom);
		for(int id=0;nom[id]!= '\0';id++){
			if (isdigit(nom[id]) != 0)
      	      number=1;
		}
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras:");
			}
	}while(number==1);
	edd=int_input("edad",0,1,130);
	m=float_input("Monto de deposito\n ",0,1,9999999);
	t=float_input("Tasa\n ",0,1,9999999);
	tiem=float_input("Tiempo\n ",0,1,9999999);
	i=interes(m,t,tiem);
	if(i>=2000&&i<=45000)
	c++;	
	sm+=m;
	printf("%s, interes a pagar es %.2f",nom,i);	
	sal=int_input("\nIngrese 1 para dejar de ingresar datos",1,1,1);		
 	}while(sal!=1);  
 printf("Intereses entre 2.000 Bsf. y 45.000 Bsf: %d\nSuma de todos los depositos %.2f",c,sm);
 printf("\nsaliendo del programa...");
  
 
 }
float interes(float num1,float num2,float num3){
	return((num1*num2*num3)/100);	
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
				printf("ERROR, numero invalido\n");
			}
	}
}