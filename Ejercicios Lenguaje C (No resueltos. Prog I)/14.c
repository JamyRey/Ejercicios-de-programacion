#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites
float float_input(char *msg,int ig,int min,int max);

main() {
	float asig,deduc,sedd;
	int sal,number,edd,c=0,cs=0,h=0,m=0;
	char nom[20],s;
	do{	
	c++;
	printf("ingresa nombre del empleado %d \n",c);
	//comprobar cadena de char
	do{
		int temp;
		number=0;
		scanf("%s",nom);
		for(int id=0;nom[id]!= '\0';id++){
			if (isdigit(nom[id]) != 0)
      	      number=1;
		}
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras:");
			}
			}while(number==1);
	edd=int_input("ingrese edad",0,1,130);
	printf("ingresa sexo(F/M)");
	//comprobar letra
	do{
		int temp;
		number=0;
		scanf("% c",&s);
			if (isdigit(s)!= 0)
				number=1;
		if(number==1||s!='f'&&s!='F'&&s!='M'&&s!='m'){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras y F/M:");
			}
		}while(number==1||s!='f'&&s!='F'&&s!='M'&&s!='m');

	asig=float_input("Ingrese monto de asignaciones mensuales:",0,0,999999);
	deduc=float_input("Ingrese monto de deducciones mensuales:",0,0,999999);
	if(s=='f'||s=='F')
		m++;
	else{
		h++;
		sedd=sedd+edd;		
		}
	if((asig-deduc)>450)
		cs++;
	printf("Empleado %s, su sueldo neto mensual es %.2f",nom,asig-deduc);
	
	sal= int_input("\nDesea terminar de ingresar empleados?(1)",1,0,0);
	}while(sal!=1);
	printf("\nEdad promedio en empleados hombres es %.2f\n",sedd/h);
	printf("Cantidad de\n\t-Mujeres %d\n\t-Hombres %d\n",m,h);
	printf("Cantidad de sueldos mayores a 450 son %d",cs);
	
	getche();	
}

int int_input(char *msg,int ig,int min,int max){
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
			if((input>=min && input<=max)||ig==1)
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}
float float_input(char *msg,int ig,int min,int max){
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
			if((input>=min && input<=max)||ig==1)
				return input;		
			else{
				printf("ERROR, numero invalido");
			}
	}
}