#include <stdio.h>
#include <stdlib.h>

 main(){
 	float c,f;
 	printf("ingrese grados centigrados");
 	scanf("%f",&c);
 	f=(c*9/5)+32;
  	printf("%.2f Centigrados es equivalente a %.2f Fahrenheit",c,f);
  	getche();
 
 }