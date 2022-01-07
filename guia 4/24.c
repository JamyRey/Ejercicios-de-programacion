#include <stdio.h>
#include <stdlib.h>
main(){
	int n,i;
	printf("Ingrese numero");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("%d %d %d\n",i,i*i,i*i*i);
	}

}