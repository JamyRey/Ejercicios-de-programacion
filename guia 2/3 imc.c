#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {	
float peso,altura,imc;
printf("Ingrese los siguientes datos para calcular su indice de masa corporal\n");
printf("peso: ");
scanf("%f",&peso);
printf("altura: ");
scanf("%f",&altura);
imc= peso/pow(altura,2);
printf("Su imc es: %f, lo cual indica que ",imc);
if(imc<18.5)
printf("usted esta por debajo de su peso ideal");
if(imc>=18.5&&imc<25.0)
printf("usted esta en su peso ideal");
if(imc>=25.0&&imc<30)
printf("usted por encima de su pesoideal");
if(imc>=30)
printf("usted tiene obesidad");
getche( );
	}