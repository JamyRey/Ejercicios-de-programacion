#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int max);
 main(){
 	int n1,n2,temp;
 	n1=int_input("ingrese numero 1 ",999);
	n2=int_input("ingrese numero 2 ",999); 
	temp=n2;
	printf("\t%d\n\tX%d\n\t-------",n1,n2);
	while(temp>0) {
    printf("\n\t%d",(temp%10)*n1);
    temp = temp / 10;
	}
    printf("\n\t-------\n\t%d",n1*n2);

  	getche();
 
 }
int int_input(char *msg,int max){
	int temp,scan;
	int input;
	while(1)
	{
		printf("%s",msg);
		scan= scanf("%d",&input);
		while(scan!=1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Entrada invalida... ingrese un numero: ");
		scan = scanf("%f", &input);
	}		
			if(input<=max)
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}