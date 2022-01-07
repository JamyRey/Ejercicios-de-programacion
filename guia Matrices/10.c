#include <stdio.h>
#include <stdlib.h>
#define N 20
void llenarM(int pares[N], int f);

main (){
	int f= N;
	int pares[N];
	llenarV(pares,f);
	for (int i=0;i<f; i++){
		printf("%d ",pares[i]);
		if((i+1)%5==0)
		printf("\n");		
	}

	
	
}
void llenarV(int pares[N], int f){
	for (int i=0;i<f; i++){
		pares[i]=2*(i+1);			
	}
}