#include <stdio.h>
#include <stdlib.h>
float float_input(char *msg,int ig,int min,int max);

main(){
	float a,b,temp;
	a=float_input("introduzca valor de a: ",1,0,1);
	printf("valor en dolares es %.3f\n",a*1.286);
	printf("valoren en libras esterlinas es %.3f",a*0.865);
}
float float_input(char *msg,int ig,int min,int max){
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