#include <stdio.h>
#include <stdlib.h>
main(){
	int t,i,c=0;
	printf("Ingrese numero");
	scanf("%d",&t);	
	for(i=1;i<=t;i++){

		if(i%3==0){
			printf("%d ",i);
			c++;
			}
	}
	printf("\nHay %d multiplos de 3",c);
}