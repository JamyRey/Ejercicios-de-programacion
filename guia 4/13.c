#include <stdio.h>
#include <stdlib.h>
main() {
	int i,par=0;
	for(i=1;i<=100;i++){
		if(i%2==0)
			par++;

	}
	printf("hay %d pares",par);

}