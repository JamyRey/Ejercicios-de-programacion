#include <stdio.h>
#include <stdlib.h>

void lados(float a[],int n);
float float_input(char *msg,int min);
main(){
	float l[3];
	
	printf("Ingrese el valor de los 3 lados de un triangulo");
	l[0]=float_input("\nlado 1: ",1);
	l[1]=float_input("\nlado 2: ",1);
	l[2]=float_input("\nlado 3: ",1);
	ordenar(l,sizeof(l)/sizeof(l[0]));

	}


void ordenar(float a[],int n){
int i,p,temp;
for (i=1; i<n; i++){
	p=i;
	while (p>=0 &&a[p]<a[p-1]){
        temp=a[p]; 
        a[p]=a[p-1]; 
        a[p-1]=temp; 
        p--; 
	}
}
	if((a[0]+a[1])>=a[2]){
		printf("si hay triangulo\n");
		if(a[0]==a[1]&&a[0]==a[2])
			printf("Es un triangulo equilatero");
		else if(a[1]==a[2])
			printf("Es un triangulo isoceles");
		else
			printf("Es un triangulo escaleno");
	}
	else
		printf("no hay triangulo\n");
}
float float_input(char *msg,int min){
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
			if(input>=min)
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}