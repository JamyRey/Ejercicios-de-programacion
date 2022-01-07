#include <stdio.h>
#include <stdlib.h>

int main(){
 char nom[20],sex;
 int edd,sal;
 float not1,not2,not3,notf;
 
 do {
	printf("Ingrese los siguientes datos:\n");
	printf("nombre \n");
	scanf(" %s",&nom);	
	printf("sexo(H/M) \n");
	getchar();
	sex=getchar();
	printf("edad\n ");
		do{	
	 	scanf("%d",&edd);
 		if(edd<0){ 
	 	printf("ERROR, ingrese un valor valido\n");}
		}while(edd<0);
	printf("nota 1 equivalente al 40\% \n ");
		do{	
	 	scanf("%f",&not1);
 		if(not1<1 || not1>20){ 
	 	printf("ERROR, ingrese un valor valido\n");}
		}while(not1<1 || not1>20);
	printf("nota 2 equivalente al 35\% \n ");	
		do{	
	 	scanf("%f",&not2);
 		if(not2<1 || not2>20){ 
	 	printf("ERROR, ingrese un valor valido\n");}
		}while(not2<1 || not2>20);
	printf("nota 3 equivalente al 25\% \n ");	
		do{	
	 	scanf("%f",&not3);
 		if(not3<1 || not3>20){ 
	 	printf("ERROR, ingrese un valor valido\n");}
		}while(not3<1 || not3>20);
	printf("Desea imprimir sus notas?(1) en caso contrario se podran introducir de nuevo los datos");
	scanf("%d",&sal);	
}while(sal!=1); 
notf= (not1*0.40)+(not2*0.35)+(not3*0.25);
printf("%s su nota final es %.2f",nom,notf);
}