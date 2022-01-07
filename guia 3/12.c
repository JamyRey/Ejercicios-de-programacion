#include <stdio.h>
#include <stdlib.h>

main(){
 char nom[20],sex;
 int naci,anoact;
 	printf("Ingrese los siguientes datos:\n");
	printf("nombre \n");
	scanf(" %s",&nom);	
	printf("sexo(H/M) \n");
	getchar();
	sex=getchar();
	printf("fecha de nacimiento(ano) \n");
	scanf(" %d",&naci);
	printf("fecha actual(ano) \n");
	scanf(" %d",&anoact);
	printf("%s,su edad es: %d anos",nom,anoact-naci);
}