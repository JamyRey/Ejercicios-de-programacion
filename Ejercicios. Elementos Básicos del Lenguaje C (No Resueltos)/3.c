#include <stdio.h>
#include <stdlib.h>

float float_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites

main(){
	float m,i;
	m=float_input("Hola\nPor favor introduzca capital inicial: ",0,0,9999999);
	i=float_input("\ntipo de interes:",0,1,100);
	printf("El se obtendra un interes de %f",m*(i/100));
}
float float_input(char *msg,int ig,int min,int max){
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