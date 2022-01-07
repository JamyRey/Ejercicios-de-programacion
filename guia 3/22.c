#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
float float_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites
int int_input(char *msg,int min,int ig,int max);//ig ignora si tiene limites
void raizk();
void intercambiar();
void promedio();
main(){
	float a,b,c,k;
	int op,sal;
	do{
	printf("\ningresar opcion\n");
	printf("1 calcular K respecto A\n");
	printf("2 intercambiar A,B,C\n");
	printf("3 Ingresar datos para el calculo de promedio\n");
	op=int_input("",0,1,4);
	switch(op){
		case 1:raizk();			
			break;
		case 2: intercambiar();				
			break;
		case 3:	promedio();			
			break;		
		}
	sal= int_input("\nDesea salir?(1)",1,1,1);
	}while(sal!=1);		
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
				printf("ERROR, numero invalido");
			}
	}
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
void raizk(){
	float a;
	a= float_input("Ingresar valor de (A)",1,1,5);
	if(a<0){
		printf("ERROR. numero negativo");
		return(1);
	}
	printf("K es igual %.2f",sqrt(a));	
}
void intercambiar(){
	float a,b,c,temp;
	a= float_input("Ingresar valor de (A)",1,1,5);
	b= float_input("Ingresar valor de (B)",1,1,5);
	c= float_input("Ingresar valor de (A)",1,1,5);
	printf("\nA %.2f\tB %.2f\tC %.2f",a,b,c);
	temp=a;
	a=b;
	b=c;
	c=temp;
	printf("\nA %.2f\tB %.2f\tC %.2f",a,b,c);
	}

void promedio(){
	float promedio;
	int edd,number;
	char nom[20],s;
	printf("ingresa nombre");	
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
	edd=int_input("ingrese edad",0,1,130);
	printf("ingresa sexo(F/M)");	
	do{
		int temp;
		number=0;
		getchar();
		scanf(" %c",&s);
			if (isdigit(s)!= 0)
				number=1;
		if(number==1||s!='f'&&s!='F'&&s!='M'&&s!='m'){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras y F/M:");
			}
	}while(number==1);
	promedio=float_input("ingrese promedio",0,1,20);
	if(promedio>=10)
		printf("Alumno %s, de sexo %c esta Aprobado",nom,s);
	else
		printf("Alumno reprobado");		
	}	