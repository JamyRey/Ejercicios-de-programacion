#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {
int n;
printf("ingrese un numero para verificar si es par o impar");
scanf("%d",&n);
if(n%2==0)
	printf("%d es par",n);
else
	printf("%d es impar",n);
getche();
 }