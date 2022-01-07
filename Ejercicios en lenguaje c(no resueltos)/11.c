#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {
int mes,cant,a;
 	mes=int_input("ingrese mes",0,1,12);
	a=int_input("ingrese anio",1,1,12);
    switch(mes){
        case  1 :
        case  3 :
        case  5 :
        case  7 :
        case  8 :
        case 10 :
        case 12 : printf( "\n31 dias");
        break;
        case  4 :
        case  6 :
    	case  9 :
        case 11 : printf( "\n30 dias");
        break;
        case  2 : 
            if (a%4==0&&a%100!=0||a%400== 0)
            	printf( "\n29 dias");
            else
            	printf( "\n28 dias");
            break;
	} 
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