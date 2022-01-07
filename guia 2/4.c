#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {
 int h;
 float taf,tafex,pago,hex,pex,pn;
 printf("ingrese horas trabajadas ");
 scanf("%d",&h);
printf("ingrese valor de tarifa ");
scanf("%f",&taf);
 if(h>40){
 	hex= h-40;
 	pago=taf*(h-hex);
 	tafex=taf+(taf*0.50);
 	printf("%f",tafex);
 	pex=tafex*hex;
 	pn=pago+pex; 
 	printf("Su salario por %d de horas trabajadas es igual a: %f\nla tarifa regular es:%f, para las horas extra %f",h,pn,taf,tafex);
 	
 }else{
 	pago=taf*h;
 	pn= pago;
 	printf("Su salario por %d de horas trabajadas es igual a: %f\nla tarifa regular es:%f",h,pn,taf);
 }
getche();
}