#include <stdio.h>
#include <stdlib.h>

main() {

	int i,ano,a,b,c,d,e,n;
	for(i=0;i<=1;i++){
	ano=2003+i;
	a=ano%19;
	b=ano%4;
	c=ano%7;
	d=(19*a+24)%30;
	e=(2*b+4*c+ 6*d+5)%7;
	n=(22+d+e);
	printf("Pascua %d\nDesde el lunes %d hasta domingo %d\n",ano,(n-6)-31,n-31);
	}
}