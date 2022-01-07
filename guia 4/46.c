#include <stdio.h>
#include <stdlib.h>

main() {
	int op,sal;
	float a,b,res;
	do{
		printf("Ingrese el el numero correspondiente con la operacion a realizar\n");
		printf("1 Suma\n");
		printf("2 resta\n");
		printf("3 multiplicacion\n");
		printf("4 division\n");
		do{
			scanf("%d",&op);
				if(!(op>=1&&op<=4))
					printf("Error, ingrese un valor valido");
		}while(!(op>=1&&op<=4));
		printf("Ingrese primer numero");
		scanf("%f",&a);
		printf("Ingrese segundo numero");
		scanf("%f",&b);
		switch(op){
		case 1:
			res= a+b;
			printf("El resultado de su operacion es %.2f\n",res);
			break;
		case 2:
			res= a-b;
			printf("El resultado de su operacion es %.2f\n",res);
			break;
		case 3:
			res= a*b;
			printf("El resultado de su operacion es %.2f\n",res);
			break;
		case 4:
			if(b==0){
				printf("Error, division por 0\n");	
				break;
			}
			printf("El resultado de su operacion es %.2f\n",res);
			res= a/b;
			break;
	
		}
		printf("Desea salir?(1)");
		scanf("%d",&sal);	
	}while(sal!=1);
	
}