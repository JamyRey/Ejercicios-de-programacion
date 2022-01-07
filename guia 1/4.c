#include <stdio.h>
#include <stdlib.h>

main() {
	int h,d,t,sal;
	printf("ingrese turno en el cual trabajo(N/D)");	
	do{
		t=getchar();
		if(t!='n'&&t!='N'&&t!='D'&&t!='d')
			printf("ERROR, ingrese datos validos");
	}while(t!='n'&&t!='N'&&t!='D'&&t!='d');
	printf("ingrese horas trabajadas");
	do{
		scanf("%d",&h);
		if(h<1||h>24)
			printf("ERROR, no se permiten estos valores");
	}while(h<1||h>24);
	printf("es domingo?(si=1)");
	scanf("%d",&d);
	if(t=='n'||t=='N'){
		sal=1600*h;
		if(d==1)
			sal+=600*h;	
	}else if(t=='D'||t=='d'){
		sal=1000*h;
		if(d==1)
			sal+=400*h;
	}
	printf("Su jornal es: %dBsf",sal);
	
}