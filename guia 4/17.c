#include <stdio.h>
#include <stdlib.h>
main(){
	int i;
	for(i=0;i<=100;i++){
		if(i%2==0)
			printf("multiplo de 2=%d\n",i);
		if(i%3==0)
			printf("multiplo de 3=%d\n",i);		
	}
}