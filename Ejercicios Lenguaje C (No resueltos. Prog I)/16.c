#include <stdio.h>
#include <stdlib.h>

float promedio(float num1,float num2,float num3);
int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites
float float_input(char *msg,int ig,int min,int max);

 int main(){
 char nom[20];
 int edd,sal,aprob=0,reprob=0,number;
 float not1,not2,not3,notf;
 
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
	not1=float_input("nota 1 equivalente al 45\% \n ",0,1,20);
	not2=float_input("nota 2 equivalente al 30\% \n ",0,1,20);
	not3=float_input("nota 3 equivalente al 25\% \n ",0,1,20);
	notf=promedio(not1,not2,not3);
	if(notf>=10&&notf<=20){
	printf("%s, usted tiene promedio de %.2f",nom,notf);
	aprob++;	
	}
	else{
	printf("%s, usted tiene promedio de %.2f",nom,notf);	
	reprob++;
	}		
	sal=int_input("desea salir e imprimir numero de aprobados y reprobados(1)\n de lo contraio seguira anadiendo alumnos(cualquier otra)",1,1,1);		
 }while(sal!=1);  
 printf("Aprobaron %d de alumnos y reprobaron %d de alumnos",aprob,reprob);
 printf("\nsaliendo del programa...");
  
 
 }
float promedio(float num1,float num2,float num3){
	return((num1*0.45)+(num2*0.30)+(num3*0.25));	
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