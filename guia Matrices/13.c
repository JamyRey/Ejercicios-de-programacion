#include <stdio.h>
#include <stdlib.h>
#define N 10

void llenarVector(int numeros[N], int d);

int int_input(char *msg);
main(){
	int numeros[N];
	llenarVector(numeros,N);
	for(int i=0;i<N;i++){
	printf("\n%d %d %d",numeros[i],numeros[i]*numeros[i],numeros[i]*numeros[i]*numeros[i]);
	}

}

void llenarVector (int numeros[N], int d){
	for (int i=0; i<d; i++){
		printf ("Inserte pos[%d]: ",i);
		numeros[i]=int_input("");
	}
}
int int_input(char *msg){
	int input,temp,scan;
	while(1){
		printf("%s",msg);
		scan= scanf("%d",&input);
		while(scan!=1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Entrada invalida... ingrese un numero: ");
		scan = scanf("%d", &input);
	}		
		return input;		
	}
}