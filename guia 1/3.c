#include <stdio.h>
#include <stdlib.h>

main() {
	int edad,tiempo;
	char sexo;
	printf("ingrese edad ");
	do{
		scanf("%d",&edad);
		if(edad<1)
			printf("ERROR, ingrese datos validos");
	}while(edad<1);
	printf("ingrese sexo(H/M)");
	do{
		getchar();
		sexo=getchar();
		if(sexo!='H'&&sexo!='m'&&sexo!='h'&&sexo!='m')
			printf("ERROR, ingrese datos validos");
	}while(sexo!='H'&&sexo!='m'&&sexo!='h'&&sexo!='m');
	if(sexo=='H'||sexo=='h')
		sexo='h';
	if(sexo=='M'||sexo=='m')
		sexo='m';
	printf("ingrese tiempo recorrido en minutos ");
	do{
		scanf("%d",&tiempo);
		if(tiempo<0)
			printf("ERROR, ingrese datos validos");
	}while(tiempo<0);
	if(edad<40&&tiempo<=150&&sexo=='h'){
		printf("Seleccionado");}
	else if(edad>=40&&tiempo<=175&&sexo=='h'){
		printf("Seleccionado");}
	else if(tiempo<=180&&sexo=='m'){
		printf("Seleccionado");}
	else 
		printf("No seleccionado");
}