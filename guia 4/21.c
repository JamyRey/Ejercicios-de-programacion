#include <stdio.h>
#include <stdlib.h>
main(){
	int i=0,d=0,t=0;
	for(i=1;i<=100;i++){
		d=0;
		for(t=1;t<=i;t++){
			if(i%t==0)
			d++;
		}
		if(d==2)
			printf("es primo=%d\n",i);
		
	}
}