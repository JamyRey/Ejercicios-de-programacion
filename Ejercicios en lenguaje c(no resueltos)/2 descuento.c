#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {	
int cant,des,val,obs;
float desd,valn;
printf("Ingrese la cantidad de productos a comprar(valor de la unidad 4 bs)\n");
scanf("%d",&cant);
if(cant==36){
	des=15;
	val= cant*4;
	desd= val*0.15;
	valn=val-desd;
}
if(cant<36){
	des=10;
	val= cant*4;
	desd= val*0.10;
	printf("%f",desd);
	valn=val-desd;
}
if(cant>36){
	des=15;
	val= cant*4;
	desd= val*0.15;
	valn=val-desd;
	obs= (cant/12)-3;
}
printf("El monto de la compra de la cantidad %d es:%d\nCon un descuento del %d por ciento igual a: %f descontado\nSe pagara un total de %f",cant,val,des,desd,valn);
printf("\nRecibe de obsequio %d",obs);
getche( );
	}