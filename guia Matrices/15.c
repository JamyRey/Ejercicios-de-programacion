#include <stdio.h>
#include <stdlib.h>
#define N 3

void llenarVector(int array[N], int d);
void copiarArray(int array[N],int a[N],int f);
int int_input(char *msg);
main(){
	int numeros[N],a[N];
	llenarVector(numeros,N);
	copiarArray(numeros,a,N);
	printf("\n");
	for (int i=0;i<N; i++){
		printf("%d ",a[i]);
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
void llenarVector (int array[N], int d){
	for (int i=0; i<d; i++){
		printf ("Inserte pos[%d]: ",i);
		array[i]=int_input("");
	}
}
void copiarArray(int array[N],int a[N],int f){
	for (int i=0; i<f; i++){
	a[i]=array[i];
	}
}
