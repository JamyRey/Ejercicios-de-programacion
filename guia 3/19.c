#include <stdio.h>
#include <stdlib.h>

main() {
	int num;
	printf("Introducir numero entero positivo ");
	do{
		scanf("%d",&num);
		if(num<0){
		printf("ERROR, solo valido numeros positivos");
		}
	}while(num<0);
	if(num>=55&&num<=75){
		num+=7;
		printf("Resultado= %d",num);
	}
	else if(num>=150&&num<=320){
			num-=num;
			printf("Resultado= %d",num);
	}	
	else if(num>=500){
		num*=20;
		printf("Resultado= %d",num);		
	}
	else	
		printf("el numero no esta comprendido en ninguno de los rangos  posibles");
	}