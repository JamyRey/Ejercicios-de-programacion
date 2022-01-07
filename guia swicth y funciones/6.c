#include <stdio.h>
#include <stdlib.h>
float float_input(char *msg);
void pagar(float a[],int n);
main() {

	float valor[3];

	printf("Ingrese el valor de las 3 peliculas");
	valor[0]=float_input("\npelicula 1: ");
	valor[1]=float_input("\npelicula 2: ");
	valor[2]=float_input("\npelicula 3: ");

//	printf("El monto a pagar es: %f",pagar(num1,num2,num3));
pagar(valor,sizeof(valor)/sizeof(valor[0]));

}
void pagar(float a[],int n){
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
printf("pagar %f",a[0]+a[1]);
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