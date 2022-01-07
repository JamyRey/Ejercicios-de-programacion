#include <stdio.h>
#include <stdlib.h>
#define N 18
#define M 10

//Vendedores

void llenarM(float vendedores[N][M], int f, int c);
int int_input(char *msg,int min,int max);
float float_input(char *msg);

main(){
	float vendedores[N][M],sum=0,sumT=0;
	int op,i,sal;
	printf("ingrese ingresos iniciales\n");
	llenarM(vendedores,N,M);
	do{
	printf("ingrese opcion del menu\n");
	printf("1 Modificar ingreso de un vendedor\n");
	printf("2 Total de ventas de un vendedor\n");
	printf("3 Total de ventas de la empresa\n");
	op=int_input("",1,3);
	switch(op){
		case 1:
		op=int_input("Ingrese vendedor a modificar ingreso: ",1,N);
		i=int_input("Ingrese vendedor a modificar ingreso: ",1,M);
		vendedores[op-1][i-1]=float_input("");
		printf("Ingreso de vendedor %d en articulo %d cambiado a %f",op,i,vendedores[op-1][i-1]);
			break;
		case 2:
		op=int_input("Ingrese vendedor a calcular total de ingresos: ",1,N);
		for(int i=0;i<M; i++){
			sum+=vendedores[op-1][i];
		}
		printf("Ingresos totales del vendedor %d son %f",op,sum);
			
		break;
		case 3:
		for(int i=0;i<N; i++){
			for(int j=0;j<M; j++){
			sumT+=vendedores[i][j];
			}
		}
		printf("Total de ingresos de la empresa %f",sumT);
			break;
	}
	sal=int_input("\nDesea salir del programa?(no=0/si=1) ",0,1);
	}while(sal!=1);

}

void llenarM(float vendedores[N][M], int f, int c){
	for (int i=0;i<f; i++){
		printf ("Vendedor numero[%d]",i+1);
		for (int j=0;j<c; j++){
			printf ("\ningrese articulo [%d] ",j+1);
			vendedores[i][j]=float_input("");
				}
		}
}

float float_input(char *msg){
	int temp,scan;
	float input;
	while(1){
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