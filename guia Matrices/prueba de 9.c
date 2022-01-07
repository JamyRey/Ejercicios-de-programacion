#include <stdio.h>
#include <stdlib.h>

void llenarM(int m[4][4], int f, int c);
main (){
	int f= 4;
	int c= 4;
	int asuma,bsuma=0,m[4][4];
	printf("introducir valores de la matriz");
	llenarM(m,f,c);
	for(int i=0;i<4;i++){
		asuma+= m[i][i];
	}
	for(int i=0;i<4;i++){
		bsuma+= m[i][3-i];
	}
	printf("Suma de primera diagonal: %d\nSuma de segunda diagonal: %d\nSuma de ambas: %d",asuma,bsuma,asuma+bsuma);
	
	
}
void llenarM(int m[4][4], int f, int c){
	for (int i=0;i<f; i++){
		for (int j=0;j<c; j++){
			printf ("inserte pos[%d][%d] ",i,j);
			scanf ("%d", &m[i][j]);
				}
		}
}