#include <stdio.h>
#include <stdlib.h>
void ordenar(float a[],int n);
main() {
	float ml[31],p;
	int dm,i;
	printf("ingrese dias del mes(28 a 31)");
	do{
		scanf("%d",&dm);
		if(dm<28||dm>31)
			printf("ERROR, numeros de dias no disponibles");
	}while(dm<28||dm>31);
	for(i=0;i<dm;i++){
		printf("ingrese milimetros de lluvia de dia %d:",i+1);
		scanf("%f",&ml[i]);
		p+=ml[i];
	}
	ordenar(ml,dm);
	printf("la menor cantidad de milimetros de lluvia es %f\nEl promedio es %f",ml[0],(p/dm));
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
}