#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int min,int max);
float float_input(char *msg,int min,int max);
main(){
	int i,op,temp,sal;
	float max=0,min=21,m;
	float n[20]={11,8,12,15,19,19,5,10,9,10,11,12,20,12,19,6,4,3,19,17};
	char nom[20][30]={{"jeremy"},{"alejandro"},{"luis"},{"tony"},{"alan"},{"mauricio"},{"leonardo"},{"sebastian"},{"lancelot"},{"mauro"},{"andy"},{"roceli"},{"jamy"},{"masa"},{"juan"},{"antonio"},{"jana"},{"maria"},{"samanta"},{"hugo"},};
	
	do{
		m=0;
		max=0,min=21;
		temp=0;
		printf("que desea realizar?(1 al 6)\n");
		printf("1. Buscar un alumno.\n");
		printf("2. Modificar su nota.\n");
		printf("3. Realizar la media de todas las notas.\n");
		printf("4. Realizar la media de las notas menores de 5.\n");
		printf("5. Mostrar el alumno que mejores notas ha sacado.\n");
		printf("6. Mostrar el alumno que peores notas ha sacado.\n");
		op=int_input("",1,6);
		switch(op){
			case 1:	i=int_input("\nque alumno desea buscar?(maximo 20) ",1,20)-1;
			printf("Alumno %s\n",nom[i]);
			break;
			case 2: i=int_input("\nque nota desea modificar?(maximo 20) ",1,20);
			n[i]=float_input("\nque nota desea colocar?(maximo 20) ",1,20);
			printf("Alumno %s, su nota ahora es %f\n",nom[i],n[i]);
			break;
			case 3:for(i=0;i<20;i++){			
				m+=n[i];	
			}
			printf("la media de todas las notas es %f",m/20);
			break;
			case 4:for(i=0;i<20;i++){
				if(n[i]<5){		
				m=m+n[i];
				temp++;
				}
			}
			printf("la media de todas las notas menores a 5 es %f\n",m/temp);	
			break;
			case 5:	for(i=0;i<20;i++){
			if(n[i]>max){
				max=n[i];
				temp=i;
				}
			}
			printf("El alumno %s tiene la mayor nota con %f",nom[temp],max);
			break;
			case 6:	for(i=0;i<20;i++){
			if(n[i]<min){
				min=n[i];
				temp=i;
				}
			}
			printf("El alumno %s tiene la menor nota con %f",nom[temp],min);
			break;
		}
	printf("desea salir?(1)");
	sal=int_input("",0,100);
	}while(sal!=1);
}
int int_input(char *msg,int min,int max){
	int input,temp,scan;
	while(1)
	{
		printf("%s",msg);
		scan= scanf("%d",&input);
		while(scan!=1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Entrada invalida... ingrese un numero: ");
		scan = scanf("%d", &input);
	}		
			if((input>=min && input<=max))
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}
float float_input(char *msg,int min,int max){
	int temp,scan;
	float input;
	while(1)
	{
		printf("%s",msg);
		scan= scanf("%f",&input);
		while(scan!=1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Entrada invalida... ingrese un numero: ");
		scan = scanf("%f", &input);
	}		
			if(input>=min && input<=max)
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}
//strcpy(mnom,nom);