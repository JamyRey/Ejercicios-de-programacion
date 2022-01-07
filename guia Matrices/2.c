#include <stdio.h>
#include <stdlib.h>

float float_input(char *msg);
main() {
	int i,p,temp;
	float a[5][2],b[5];
	for(i=0;i<5;i++){
		printf("ingrese numero %d ",i+1);
		a[i][0]=float_input("");
		a[i][1]=a[i][0]*2;
		b[i]=a[i][1];
		}
	for(i=0;i<5;i++){
	printf("numero multiplicado=%.2f\n",a[i][1]);	
	}
	for(i=1;i<5;i++){
		p=i;
		while (p>=0 &&b[p]<b[p-1]){
        	temp=b[p]; 
       		b[p]=b[p-1]; 
       		b[p-1]=temp; 
      		p--; 
	}
}
	for(i=0;i<5;i++){
		printf("numero multiplicado ordenados=%.2f\n",b[i]);	
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