#include <stdio.h>
#include <stdlib.h>
float float_input(char *msg,int min,int max);
main() {
	float nota1,nota2,nota3;
	int number;
	char nomb[20],apell[20];	
	printf("Ingrese nombre\n");
do{
		int temp;
		number=0;
		scanf(" %s",nomb);
		for(int id=0;nomb[id]!= '\0';id++){
			if (isdigit(nomb[id]) != 0)
      	      number=1;
		}
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras:");
			}
	}while(number==1);
	printf("Ingrese apellido\n");
do{
		int temp;
		number=0;
		scanf(" %s",apell);
		for(int id=0;apell[id]!= '\0';id++){
			if (isdigit(apell[id]) != 0)
      	      number=1;
		}
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras:\n");
			}
	}while(number==1);
	
	

	printf("Ingrese notas\n");
	nota1=float_input("Valor de nota 1=",1,20);
	nota2=float_input("Valor de nota 2=",1,20);
	nota3=float_input("Valor de nota 3=",1,20);
	printf("Alumno %s %s, el calculo de su promedio es:%f",nomb,apell,(nota1+nota2+nota3)/3);
	getche();
}
float float_input(char *msg,int min,int max){
	int temp,scan;
	float input;
	while(1)
	{
		printf("%s",msg);
		scan= scanf("%f",&input);
		while(scan!=1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Entrada invalida... ingrese un numero:\n");
		scan = scanf("%f", &input);
	}		
			if(input>=min && input<=max)
				return input;		
			else{
				printf("ERROR, numero invalido\n");
			}
	}
}