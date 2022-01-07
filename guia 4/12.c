#include <stdio.h>
#include <stdlib.h>
main() {
	int i,im=0;
	for(i=1;i<=100;i++){
		if(!(i%2==0))
			im++;

	}
	printf("hay %d impares",im);

}