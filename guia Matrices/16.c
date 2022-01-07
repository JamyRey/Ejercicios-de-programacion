#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

//Ordenar pares e impares
void llenarVector(int a[N], int d);


main(){
	int a[N],im[N],p[N];
	int impar=0,par=0;
	srand(time(NULL));
	llenarVector(a,N);
	for (int i=0;i<N; i++){
		printf(" %d ",a[i]);
		if((i+1)%10==0)
		printf("\n");
		}
	printf("\n\n");
	for (int i=0;i<N;++i){
   		switch(a[i]%2){
       		case 0:
        	p[par++]=a[i];
            break;
       		case 1:
            im[impar++]=a[i];
            break;
 	   }
	}
 	   
	printf("Par\n");
	for (int i=0;i<par; i++){
		printf(" %d ",p[i]);
		if((i+1)%10==0)
		printf("\n");
		}
	printf("\nimpar\n");
	for (int i=0;i<impar; i++){
		printf(" %d ",im[i]);
		if((i+1)%10==0)
		printf("\n");
		}
}




void llenarVector(int a[N], int d){
	for (int i=0; i<d; i++){
	a[i]=rand()%(1000-1+1) + 1;
	}
}
