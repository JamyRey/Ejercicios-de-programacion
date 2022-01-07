#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void min(float a[],int n);
main() {
	int op,i;
	float nums[3],a,b,gc,gf,c,p,k;
	int longitud=sizeof(nums)/sizeof(nums[0]);
	printf("Seleccione una de las siguientes opciones\n");
	printf("1 valor minimo\n");
	printf("2 centigrados a Farenheint\n");
	printf("3 calcular k\n");
	do{
		scanf("%d",&op);
		if(op<1||op>3)
			printf("ERROR, opcion invalida");
	}while(op<1||op>3);

	if(op==1){
	for(i=0;i<longitud;i++){
		printf("introduzca valor %d: ",i+1);
		do{
		scanf("%f",&nums[i]);
		if(nums[i]==nums[i-1]||nums[i]==nums[i-2])
			printf("ERROR, no se aceptan numeros iguales");
		}while(nums[i]==nums[i-1]||nums[i]==nums[i-2]);
		}
	min(nums,longitud);
	}
	else if(op==2){
	 	printf("ingrese grados centigrados");
 		scanf("%f",&gc);
 		gf=(gc*9/5)+32;
  		printf("%.2f Centigrados es equivalente a %.2f Fahrenheit",gc,gf);
	}
	else if(op==3){
			float a,b,c,p;
		printf("Ingrese lados del triangulo\n");
		printf("Lado a:");
		scanf(" %f",&a);
		printf("Lado b:");
		scanf(" %f",&b);
		printf("Lado c:");
		scanf(" %f",&c);
		p= (a+b+c)/2;
		k=p*(p-a)*(p-b)*(p-c);
		if(k>0)
		printf("K es igual a %f",sqrt(k));
		else
		printf("ERROR, raiz cuadrada de un numero negativo");
	}

}
void min(float a[],int n){
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
printf("\n valor minimo es %0.2f",a[0],a[n-1]);
}