#include <stdio.h>
#include <stdlib.h>

main(){
	char nom[20];
	int numtel,min;
	printf("Ingrese su nombre ");
	scanf("%s",&nom);
	printf("Ingrese su numero de telefono ");
	scanf("%d",&numtel);
	printf("Ingrese minutos de llamada usados ");
	scanf("%d",&min);
	printf("%s, el costo de su llamada es: %d Bs",nom,820*min);
	
}
