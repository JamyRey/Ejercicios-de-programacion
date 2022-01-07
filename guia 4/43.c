#include <stdio.h>
#include <stdlib.h>
main(){
	int s=0,i,con,sn,edd,sal,t=0,r=0,v=0,h=0,f=0,p=0;
	float tp=0,rp=0,vp=0,hp=0,fp=0,pp=0;
	char nom[20],apell[20];
	do{
		s++;
		printf("ingrese numero de socio ");
		scanf("%d",&sn);
		printf("ingrese nombre del socio ");
		scanf(" %s",nom);
		printf("ingrese apellido del socio ");
		scanf(" %s",apell);
		printf("ingrese edad de socio ");
		do{
			scanf("%d",&edd);
			if(edd<0)
				printf("ERROR, edad negativa");
		}while(edd<1);
		for(i=1;i<=6;i++){
			con=0;
			switch(i){
				case 1:	printf("Practica tenis?(s=1/n=0)");
				scanf("%d",&con);				
				if(con==1){
					t++;
					tp+=edd;}
				break;
				case 2:	printf("Practica rugby?(s=1/n=0)");
				scanf("%d",&con);				
				if(con==1){
					r++;
					rp+=edd;}
				break;
				case 3:	printf("Practica voley?(s=1/n=0)");
				scanf("%d",&con);				
				if(con==1){
					v++;
					vp+=edd;}
				break;
				case 4:	printf("Practica hockey?(s=1/n=0)");
				scanf("%d",&con);				
				if(con==1){
					h++;
					hp+=edd;}
				break;
				case 5:	printf("Practica futbol?(s=1/n=0)");
				scanf("%d",&con);				
				if(con==1){
					f++;
					fp+=edd;}
				break;
				case 6:	printf("Practica paddle?(s=1/n=0)");
				scanf("%d",&con);				
				if(con==1){
					p++;
					pp+=edd;}
				break;									
			}									
		}
		printf("Desea terminar de introducir socios(1)");
		scanf("%d",&sal);
		}while(sal!=1);
	printf("%d practican tenis y %d practican paddle\n",t,p);
	printf("Promedio de edad de cada deporte\nTenis %f\nRugby %f\nVoley %f\nHockey %f\nFutbol %f\nPaddle %f",tp/t,rp/r,vp/v,hp/h,fp/f,pp/p);
		
		
		
	}
		
		