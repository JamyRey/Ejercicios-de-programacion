#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
	float p,mp=0;
	int a=0,rd=0,rm=0,nl,nlm,sal;
	char nom[20],mnom[20];
	do{

	printf("ingrese N# de legajo del alumno ");
	scanf(" %d",&nl);
	printf("ingrese nombre del alumno ");
	scanf(" %s",nom);
	printf("ingrese promedio del alumno ");
	do{
		scanf("%f",&p);
		if(p<1||p>20)
			printf("ERROR, promedio invalido");
	}while(p<1||p>20);
	if(mp<p){
		mp=p;
		nlm=nl;
		strcpy(mnom,nom);	
	}
	if(p>=7){
		a++;}
	else if(p>=4&&p<7){
		rd++;}
	else
		rm++;
	printf("Desea terminar de introducir alumnos?(1)");
	scanf("%d",&sal);
	}while(sal!=1);
	printf("Alumnos aprobados %d\nAlumnos que rindes examenes en diciembre %d\nAlumnos que rindes examenes en marzo %d\n",a,rd,rm);
	printf("Mejor promedio con %f, pertenece a Nl#%d %s",mp,nlm,mnom);

}