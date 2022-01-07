#include <stdio.h>
#include <stdlib.h>

void llenarMatriz (int M[20][20], int f, int c);
void llenarVector (int V[20], int d);
int primosMatriz (int M[20][20], int f, int c);
int primosVector(int V[20], int d);
int int_input(char *msg,int min,int max);

main (){
int M [20][20];
int V [20];
int f, c,d;

f=int_input("Introduce las filas de la matriz: ",1,20);
c=int_input("Introduce las columnas de la matriz: ",1,20);
d=int_input("Introduce la dimension del vector: ",1,20);
printf ("\nEntrada de la matriz: \n");
llenarMatriz(M,f,c);

printf ("\nEntrada del vector: \n");
llenarVector (V,d);
int primos = primosMatriz(M,f,c)+primosVector(V,d);
printf ("\nCantidad de primos en matriz: %d\nCantidad de primos en vector: %d\nSuma de los dos: %d",primosMatriz(M,f,c),primosVector (V,d),primos);

getche();
}
void llenarMatriz (int M[20][20], int f, int c)
{
for (int i=1;i<=f; i++)
{
for (int j=1;j<=c; j++)
{
printf ("inserte pos[%d][%d] ", i,j);
scanf ("%d", &M [i][j]);
}
}
}
void llenarVector (int V[20], int d){
for (int i=1; i<=d; i++)
{
printf ("Inserte pos[%d]: ",i);
scanf ("%d", &V [i]);
}
}
int primosMatriz (int M[20][20], int f, int c){
int cant = 0;
for (int i = 1; i<=f; i++)
{
for (int j = 1; j<=c; j++)
{
int cc=0;
for (int k =1 ; k<= M [i][j]; k++)
{
if (M[i][j] % k ==0)
cc++;
}
if (cc==2) cant++;
}
}
return (cant);
}
int primosVector(int V[20], int d){
int cant=0;
for (int i=1; i<=d; i++)
{
int c=0;
for (int j=1; j<=V[i]; j++)
{
if (V[i] % j ==0) c++;
}
if (c==2)cant++;
}
return (cant);
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