#include <stdio.h>
#include <stdlib.h>

float float_input(char *msg);
main() {
	int i;
	float a[10],p;
	for(i=0;i<10;i++){
		printf("ingrese numero %d ",i+1);
		a[i]=float_input("");
		p+=a[i];
		}
	p=p/10;
	printf("promedio=%.2f\n",p);	

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