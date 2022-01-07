#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 25

char asiento[M][N];
int a,x,i,j, butaca,fila;

void ini(void);
void reserva();
void cancelar ();
void mostrar ();
int int_input(char *msg,int min,int max);

int main (){
	int op1,number;
	ini();
	do{
	mostrar();
	printf("seleccione una opcion\n");
	printf("1 reservar asiento\n");
	printf("2 cancelar\n");
	printf("3 mostrar asientos\n");
	printf("4 salir");
	op1=int_input("",1,4);
	switch (op1){
		case 1:
			reserva();
			break;
		case 2:
			cancelar();
			break;
		case 3:
			mostrar();
			break;
		case 4:
			return(1);
			break;
		default:break;
		}
	}while(op1!=5);
}

void ini(void){
	x=0;
	for(i=0;i<M;i++){
		for (j=0;j<N;j++){
			asiento[i][j]='0';
		}
	}	
}
void reserva(void){
	
	fila=int_input("\ningrese fila(1 a 4)",1,4)-1;	
	printf("solo numeros de 1 a 25\n");
	printf("Ingrese numero asiento :\n");
	butaca=int_input("",1,25);
	if(asiento[fila][butaca-1]=='X'){
		printf("el asiento %d %d ya esta reservado\nvuelva a ingresar su reserva\n",fila+1,butaca+1);
		reserva();
	}else{
		printf("Ha eligio la fila %d numero %d\n", fila+1, butaca+1);
		asiento [fila][butaca-1]= 'X'; 
	}
}
void cancelar (void){
	fila=int_input("\ningrese fila(1 a 4)",1,4)-1;	
	printf("solo numeros de 1 a 25\n");
	printf("Ingrese numero asiento :\n");
	butaca=int_input("",1,25);

	if(asiento[fila][butaca-1]!='X'){
		printf("el asiento %d %d no esta reservado\nvuealva a ingresar su asiento\n",fila+1,butaca+1);
	}else{
		printf("Ha elimino el asiento de la fila %d numero %d\n", fila+1, butaca);
		asiento [fila][butaca-1]= '0';
	}

}

void mostrar (void){
	printf("\t");
	for (j=1;j<=N;j++){
			printf("%d ",j);
		}
		printf("\n");
    for(i=0;i<M;i++){
		printf(" %d\t", i+1);
		a+=i+1;
		for (j=0;j<N;j++){
			if (j<10)
				printf("%c ",asiento[i][j]);
			else
				printf(" %c ",asiento[i][j]);
		}
	printf("\n");
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