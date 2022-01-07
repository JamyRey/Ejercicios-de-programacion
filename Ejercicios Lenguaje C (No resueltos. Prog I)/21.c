#include <stdio.h>
#include <stdlib.h>
#define N 4

int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites

 int main(){
 int P[N][N],Pt[N][N],st;
 
 	for(int i=0;i<N;i++){
 		for(int j=0;j<N;j++){
 			printf("Ingrese datos de pos[%d][%d]",i+1,j+1);
 			P[i][j]=int_input("",1,1,1);
		 }
	 }
	for(int i=0;i<N;i++){
 		for(int j=0;j<N;j++){
 			Pt[j][i]=P[i][j];
		 }
	 }
	for(int i=0;i<N;i++){
		st+=Pt[i][i];
		}
	printf("\nMatriz");
	for(int i=0;i<N;i++){
	printf("\n");
 		for(int j=0;j<N;j++){
 			printf(" %d",P[i][j]);
		 }
	 }
	printf("\n");
	printf("\nMatriz transpuesta");
	for(int i=0;i<N;i++){
	printf("\n");
 		for(int j=0;j<N;j++){
 			printf(" %d",Pt[i][j]);
		 }
	 }
 	printf("\n Suma de la diagonal %d",st);
 
}





int int_input(char *msg,int ig,int min,int max){
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
			if((input>=min && input<=max)||ig==1)
				return input;		
			else{
				printf("ERROR, numero invalido\n");
			}
	}
} 