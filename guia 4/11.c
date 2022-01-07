#include <stdio.h>
#include <stdlib.h>
main() {
	int d;
	do{
		printf("ingrese un dia de la semana(numero 1 a 7)\ncualquier otro numero resultara en la salida");
		scanf("%d",&d);
		switch(d){
			case 1: printf("lunes\n");
			break;
			case 2: printf("martes\n");
			break;
			case 3: printf("miercoles\n");
			break;
			case 4: printf("jueves\n");
			break;
			case 5: printf("viernes\n");
			break;
			case 6: printf("sabado\n");
			break;
			case 7: printf("domingo\n");
			break;
		}
	}while(d>=1&&d<=7);


}