#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
float float_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites

main(){
	float r;
	r=float_input("introduzca radio: ",1,0,1);
	printf("El perimetro de una circunferencoa de radio %f, tiene un perimetro de %f",r,2*PI*r);
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