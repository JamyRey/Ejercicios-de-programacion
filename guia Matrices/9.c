#include <stdio.h>
#include <stdlib.h>
#define N 20
void llenarM(int m[N][N], int f, int c);
int int_input(char *msg);

main (){
	int f= N;
	int c= N;
	int asuma,bsuma=0,m[N][N];
	printf("introducir valores de la matriz");
	llenarM(m,f,c);
	for(int i=0;i<N;i++){
		asuma+= m[i][i];
	}
	for(int i=0;i<N;i++){
		bsuma+= m[i][N-i-1];
	}
	printf("Suma de primera diagonal: %d\nSuma de segunda diagonal: %d\nSuma de ambas: %d",asuma,bsuma,asuma+bsuma);
	
	
}
void llenarM(int m[N][N], int f, int c){
	for (int i=0;i<f; i++){
		for (int j=0;j<c; j++){
			printf ("inserte pos[%d][%d] ",i,j);
			m[i][j]=int_input("");
				}
		}
}
int int_input(char *msg){
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
		return input;		
	}
}