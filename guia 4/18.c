#include <stdio.h>
#include <stdlib.h>
main(){
	int t,i,s=0;
	printf("ingrese un numero entero");
	scanf("%d",&t);
	for(i=0;i<=t;i++){
		s= i+s;
		printf("%d-valor actual %d\n",i,s);
	}
}