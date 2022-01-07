#include <stdio.h>
#include <stdlib.h>
int int_input(char *msg,int min,int max);
float float_input(char *msg,int min,int max);
main(){
	float n[3][5][2];
	float m;
	int op,sal,i,j,k,ap=0,rp=0;
		for(i=0;i<3;i++){
			printf("ingrese notas de los alumnos del curso %d\n",i+1);
			for(j=0;j<5;j++){
				printf("alumno %d\n",j+1);
					for(k=0;k<2;k++){
						printf("asginatura%d\n",k+1);	
						n[i][j][k]=float_input("",1,20);
						}
				}
		}
	printf("De que curso quiere saber la nota media?(1,2,3)");
	op=int_input("",1,3);
        for(i=0;i<5;i++){
            for(j=0;j<2;j++){
              m+=n[op-1][i][j];
        	}
    	}
        printf("La nota media del Curso %d es %.2f\n\n\n",op,m/10);
	printf("De que curso quiere saber los aprobados y suspendidos?(1,2,3)");
	op=int_input("",1,3);
	printf("asignatura?(1,2)");
	j=int_input("",1,2);
        for(i=0;i<5;i++){
            if(n[op-1][i][j-1]>=9){
                    ap++;
                }
                else{
                    rp++;
                }
    	}
	printf("Curso %d, asignatura %d\nAprobados %d\nreprobados %d",op,j,ap,rp);
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