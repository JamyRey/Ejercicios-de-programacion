#include <stdio.h>
#include <stdlib.h>
main(){
	int a;
	printf("introducir anio en el cual se desea realizar la comprobacion ");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0||a%400== 0)
		printf("El anio %d es bisiesto",a);
	else
		printf("El anio %d no es bisiesto",a);
getche();
}