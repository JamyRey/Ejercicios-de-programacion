#include <stdio.h>
#include <stdlib.h>
#define N 10

void llenarM(int matriz[N][N], int f, int c);

int int_input(char *msg);
main(){
	int matriz[N][N],sumC[N],sumF;
	llenarM(matriz,N,N);
	//for para vacias datos de sumC, por alguna razon ya tenia datos ingresados
	for (int i=0;i<N; i++){
		sumC[i]=0;
		}
	for (int i=0;i<N; i++){
		printf("\n");
		for (int j=0;j<N; j++){
			printf ("%d ",matriz[i][j]);
			sumF+=matriz[i][j];
			sumC[j]+=matriz[i][j];
		}
			printf("  %d",sumF);
			sumF=0;
	}
	printf("\n");
	for (int i=0;i<N; i++){
		printf("%d ",sumC[i]);
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
void llenarM(int matriz[N][N], int f, int c){
	for (int i=0;i<f; i++){
		for (int j=0;j<c; j++){
			printf ("inserte pos[%d][%d] ",i,j);
			matriz[i][j]=int_input("");
				}
		}
}