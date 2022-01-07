#include <stdio.h>
#include <stdlib.h>

float float_input(char *msg);
main() {
	int i;
	float a[5][2];
	for(i=0;i<5;i++){
		printf("ingrese numero %d ",i+1);
		a[i][0]=float_input("");
		a[i][1]=a[i][0]*2;
		}
	for(i=0;i<5;i++){
	printf("numero multiplicado=%.2f\n",a[i][1]);	
	}
}
float float_input(char *msg){
	int temp,scan;
	float input;
	while(1)
	{
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