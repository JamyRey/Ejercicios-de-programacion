#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main() {
	char men[20];
	char *p;
	int z,a,e=0,i,o=0,u=0;
	scanf("%s", men);
	p=men;
	while(*p!= '\0'){
		printf( "%c\n",*p);
		if(*p =='a')
		a++;
		if(*p =='e')
		e++;
		if(*p =='i')
		i++;
		if(*p =='o')
		o++;
		if(*p =='u')
		u++;
		p++;
	}
	printf("a=%d \ne=%d\ni=%d\no=%d\nu=%d\n",a,e,i,o,u);
	
	
	
	}