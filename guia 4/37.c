#include <stdio.h>
#include <stdlib.h>

main() {
	float tem,temax=0,temin=10000;
	int i,d,dmax=0,dmin=0;
	printf("ingrese dias a regitrar ");
	scanf("%d",&d);
	for(i=1;i<=d;i++){
		printf("temperatura del dia %d ",i);
		scanf(" %f",&tem);
		if(tem>temax){
			temax=tem;
			dmax=i;
			}
		if(tem<temin){
			temin=tem;
			dmin=i;
			}
	}
	printf("Temperatura mas alta %f en dia %d\nTemperatura mas baja %f en dia %d",temax,dmax,temin,dmin);
}