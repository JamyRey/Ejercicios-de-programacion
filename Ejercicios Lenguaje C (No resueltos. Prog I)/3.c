#include <stdio.h>
#include <stdlib.h>
int int_input(char *msg,int min,int max);
main() {
	int number,mtel,costo,amin;
	char nomb[20],tel[11];	
	printf("Ingrese datos de la llamada\n");
	printf("Ingrese nombre\n");
do{
		int temp;
		number=0;
		scanf("%s",nomb);
		for(int id=0;nomb[id]!= '\0';id++){
			if (isdigit(nomb[id]) != 0)
      	      number=1;
		}
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras:");
			}
		
	}while(number==1);
	printf("Ingrese telefono\n");
	do{
		int temp;
		number=0;
		scanf("%s",tel);
		for(int id=0;nomb[id]!= '\0';id++){
			if (isdigit(tel[id])== 0)
      	      number=1;
		}
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo numeros:");
			}
		
	}while(number==1);
	mtel=int_input("Numero de minutos en llamada=",1,90000);
	
	if(mtel>=0&&mtel<=3)
	costo=mtel*400;
	if(mtel>3){
	costo=3*400;
	amin=mtel-3;
	costo+=amin*600;
	
	}
	printf("%s, el monto de su llamada es %d",nomb,costo);
	getche();
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
