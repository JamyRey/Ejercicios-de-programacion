#include <stdio.h>
#include <stdlib.h>
float promedio(float a[],int n);
void minmax(float a[],int n);
float float_input(char *msg,int min,int max);
main() {
	int i;
	float sumatoria=0,notas[4];
	int longitud=sizeof(notas)/sizeof(notas[0]);
	for(i=0;i<longitud;i++){
		printf("introduzca nota %d: ",i+1);
		notas[i]= float_input("",0,20);}
	printf("su promedio es %0.2f",promedio(notas,longitud));
	minmax(notas,longitud);
}

float promedio(float a[],int n){
	int i;
	float sumatoria=0;
	for(i=0;i<n;i++){
	sumatoria += a[i];
	}
	return(sumatoria/n);
}
void minmax(float a[],int n){
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
printf("\nnota minima es %0.2f y nota maxima %0.2f",a[0],a[n-1]);
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
		printf("Entrada invalida... ingrese un numero: ");
		scan = scanf("%f", &input);
	}		
			if((input>=min && input<=max))
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}