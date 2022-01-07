#include <stdio.h>
#include <stdlib.h>
#define N 6

float promedio(float num1,float num2,float num3);
int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites
float float_input(char *msg,int ig,int min,int max);

 int main(){
 char nom[N][20];
 int im,number;
 float Pm=0,N1,N2,N3,P[N];
 
	for(int i=0;i<N;i++){
	printf("Ingrese los siguientes datos del alumno %d:\n",i+1);
	printf("nombre \n");
	do{
		int temp;
		number=0;
		scanf("%s",nom[i]);
		for(int id=0;nom[i][id]!= '\0';id++){
			if (isdigit(nom[i][id]) != 0)
      	      number=1;
		}
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras:");
			}
	}while(number==1);
	N1=float_input("nota 1\n ",0,1,20);
	N2=float_input("nota 2\n ",0,1,20);
	N3=float_input("nota 3\n ",0,1,20);
	P[i]=promedio(N1,N2,N3);
	if(Pm<P[i]){
		im=i;
		Pm=P[i];
	}	
}
	printf("\nPromedios");
	for(int i=0;i<N;i++){
		printf("\n%s\n\t%f",nom[i],P[i]);	
		}
	printf("\nMejor promedio %s es de %f ",nom[im],P[im]);
 	printf("\nsaliendo del programa...");
  
 
 }
float promedio(float num1,float num2,float num3){
	return((num1+num2+num3)/3);	
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