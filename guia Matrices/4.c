#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int_input(char *msg,int min,int max);
float float_input(char *msg);
main() {
	int n,i,p,temp;
	float a[MAX];
	n=int_input("ingrese cantidad de numeros a ingresar",1,MAX);
	for(i=0;i<n;i++){
		printf("ingrese un numero positivo o negativo %d ",i+1);
	a[i]=float_input("");
		}

	for(i=1;i<n;i++){
		p=i;
		while (p>=0 &&a[p]<a[p-1]){
        	temp=a[p];
       		a[p]=a[p-1]; 
       		a[p-1]=temp; 
      		p--; 
	}
}
	for(i=0;i<n;i++){
	printf("numeros ordenados=%.2f\n",a[i]);	
	}
}
int int_input(char *msg,int min,int max){
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
			if((input>=min && input<=max))
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}
float float_input(char *msg){
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
	return input;	
	}
}
