#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
	int i,d,pi,pc,pb,pg=0,men=0;
	char nom[20],apell[20],nomg[20],apellg[20];
	for(i=1;i<=20;i++){
		printf("Ingresar datos del participante %d\n",i);
		printf("ingrese nombre\n");
		scanf(" %s",nom);
		printf("ingrese apellido\n");
		scanf(" %s",apell);
		printf("ingresar puntos en\n");
		printf("Puntos por inteligencia \n");
		scanf("%d",&pi);
		men=pi;
		if(men>pi)
			men=pi;
		printf("Puntos por Cultura general \n");
		scanf("%d",&pc);
		if(men>pc)
			men=pc;
		printf("Puntos por Belleza \n");
		scanf("%d",&pb);
		if(men>pb)
			men=pb;
		printf("Participante %sPuntos en inteligencia %d\nPuntos en Cultura general %d\nPuntos en Belleza %d\nPustos generales%d\n",nom,pi,pc,pb,pi+pc+pb);
		printf("Punto menor %d\n",men);
		if((pi+pc+pb)>pg){
		strcpy(nomg,nom);
		strcpy(apellg,apell);
		pg=pi+pc+pb;
			}
	}
	printf("El ganador es %s %s con %d putos",nomg,apellg,pg);
}
