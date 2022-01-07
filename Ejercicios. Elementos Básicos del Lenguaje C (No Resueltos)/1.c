#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites

main(){
	int fecha;
	fecha=int_input("Hola\nPor favor introduzca el anio en que nacio: ",0,0,2021);
	printf("Si usted nacio en %d este anio cumple %d anios.",fecha,2021-fecha);
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