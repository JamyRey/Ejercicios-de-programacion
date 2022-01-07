#include <stdio.h>
#include <stdlib.h>

int main(){
 	char nom[20];
 	float not1,not2;
	printf("Ingrese su nombre ");
	scanf(" %s",&nom);
	printf("Ingrese su calificacion en pascal ");
	do{	
	 	scanf("%f",&not1);
 		if(not1<1 || not1>20){ 
	 	printf("ERROR, ingrese un valor valido\n");}
		}while(not1<1 || not1>20);
	printf("Ingrese su calificacion en visual basic ");
	do{	
	 	scanf("%f",&not2);
 		if(not2<1 || not2>20){ 
	 	printf("ERROR, ingrese un valor valido\n");}
		}while(not2<1 || not2>20);
	printf("%s, su promedio es %f",nom,(not1+not2)/2);
 
 }
 
 