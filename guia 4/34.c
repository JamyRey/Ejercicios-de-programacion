#include <stdio.h>
#include <stdlib.h>
void ordenar(float a[],int n);
main(){
	int i;
	float a[5];
for(i=0;i<5;i++){
		printf("ingrese numero %d:",i+1);
		scanf("%f",&a[i]);
	}
ordenar(a,5);
}
void ordenar(float a[],int n){
int i,p,temp;
for (i=1; i<n; i++){
	p=i;
	while (p>=0 &&a[p]<a[p-1]){
        temp=a[p]; 
        a[p]=a[p-1]; 
        a[p-1]=temp; 
        p--; 
	}
}
printf("mayor %.1f\nmenor %.1f",a[4],a[0]);
}