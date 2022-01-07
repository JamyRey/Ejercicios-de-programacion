#include <stdio.h>
#include <stdlib.h>
#define N 5

void llenarVector(float numeros[N], int d);
float float_input(char *msg);
main(){
	float numeros[N];
	float m=0;
	int mi;
	llenarVector(numeros,N);
	for(int i=0;i<N;i++){
		if(m<numeros[i]){
			m=numeros[i];
			mi=i;
		}		
	}
	printf("Mayor valor del array %f, posicionado en pos[%d]",m,mi);
}

void llenarVector (float numeros[N], int d){
	for (int i=0; i<d; i++){
		printf ("Inserte pos[%d]: ",i);
		numeros[i]=float_input("");
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