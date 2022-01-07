#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {
int g;
printf("ingrese un angulo en grados para verificar su tipo");
do{
scanf("%d",&g);
if(!(g>=0&&g<=360))
	printf("ERROR, ingrese un angulo valido");
}while(!(g>=0&&g<=360));

if(g==90)
	printf("%d es un angulo recto",g);
if(g<90)
	printf("%d es un angulo agudo",g);
if(g>90)
	printf("%d es un angulo obtuso",g);
getche();
 }