#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int int_input(char *msg,int ig,int min,int max);//ig ignora si tiene limites
main() {
	int cont=1,contra,temp,num1,op,saldo;
	char sal;
	saldo= 520;
	printf("Ingrese clave de acceso de 4 digitos");
		do{
		contra= int_input("",1,0,0);
		temp=abs(contra);
		while(temp/10>0){
    		temp=temp/10;
        	cont++;
    		}
    	if(cont!=4){
    		printf("ERROR, ingrese contra de 4 digitos ");
    		cont=1;
		}
		}while(cont!=4);
	printf("ingrese de nuevo la clave para validar");
	temp=int_input("",1,0,0);
	if(temp!=contra){
		printf("Clave incorrecta, saliendo del programa");
		return(0);
	}
	while(temp==contra){
		printf("Ingrese operacion");
 		printf("\n1 Consultar saldo");
 		printf("\n2 Retiro");
 		printf("\n3 Deposito\n");
 		do{
			op=int_input("",1,0,0);
			if(op<1||op>3)
    		printf("ERROR, ingrese operacion valida");
		 }while(op<1||op>3);
 		switch(op){
 			case 1:printf("Su saldo es: %d",saldo);
				break;
 			case 2:printf("Cuanto desea retirar?:");
 				do{
 				num1=int_input("",1,0,0);
 				num1=abs(num1);
 				if(saldo<num1)
    			printf("ERROR, ingrese operacion valida");
				}while(saldo<num1);
 				saldo-=num1;
 				printf("Ha retirado %d\nOperacion exitosa",num1);
				break;
 			case 3:printf("Cuanto desea depositar?:");
 				num1=int_input("",1,0,0);
 				num1=abs(num1);
 				saldo+=num1;
 				printf("Ha depositado %d\nOperacion exitosa",num1);
				break;
		 }
		printf("\nDesea salir(s)");
		getchar();
		sal=getchar();
		if(sal=='s'||sal=='S')
			return(0);
	}

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