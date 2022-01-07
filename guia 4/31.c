#include <stdio.h>
#include <stdlib.h>

main() {
	int a,b,i,c=0,p=0;
	printf("Ingrese numero 1 ");
	scanf("%d",&a);
	printf("Ingrese numero 2 ");
	scanf("%d",&b);
	if(a>b){
		for(b+=1;b<a;b++){
			printf("%d ",b);
			c++;
			if(b%2==0)
				p++;			
		}
	}
	if(b>a){
		for(a+=1;a<b;a++){
			printf("%d ",a);
			c++;
			if(a%2==0)
				p++;			
		}
	}
	printf("\nhay %d numeros y %d numeros pares",c,p);
}