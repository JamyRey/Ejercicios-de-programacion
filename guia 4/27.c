#include <stdio.h>
#include <stdlib.h>

void lados(float a[],int n);
main(){
	float l[3];
	
	printf("Ingrese el valor de los 3 lados de un triangulo");
	printf("\nlado 1: ");
	scanf("%f",&l[0]);
	printf("\nlado 2: ");
	scanf("%f",&l[1]);
	printf("\nlado 3: ");
	scanf("%f",&l[2]);
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
