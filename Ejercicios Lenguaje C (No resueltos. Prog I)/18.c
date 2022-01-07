#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int int_input(char *msg,int ig,int min,int max);
main(){
 int op,sal,vonull,number;
 int vo1=0,vo2=0,vo3=0;
 char ced[10]; 
 	do{
		printf("Ingrese cedula");
		do{
		int temp;
		number=0;
		scanf("%s",ced);
		for(int id=0;ced[id]!= '\0';id++){
			if (isdigit(ced[id]) == 0)
      	      number=1;		}
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo numeros:");
			}
			}while(number==1);
 		printf("Ingrese voto");
 		printf("\n1 Pedro");
 		printf("\n2 Maria");
 		printf("\n3 Juan");
		op=int_input("",1,1,1);
		if(op==1){
			printf("voto por Pedro");
			vo1++;
		}
		else if(op==2){
			printf("voto por Maria");
			vo2++;
		}
		else if(op==3){
			printf("voto por Juan");
			vo3++;
		}else{
			printf("voto nulo");
			vonull++;	
		}
		sal=int_input("\nDesea ingresar otro votante?(1) Cualquier otra opcion imprimira los resultados",1,1,1);
	 }while(sal==1);
	printf("Cantidad de votos por participante\nPedro: %d\nMaria: %d\nJuan: %d\nVotos nulos: %d\n",vo1,vo2,vo3,vonull);
	if(vo1>(vo2+vo3)){
			printf("Gano Pedro");
		}
		if(vo2>(vo1+vo3)){
			printf("Gano Maria");
			vo2++;
		}
		if(vo3>(vo2+vo1)){
			printf("Gano Juan");
			vo3++;
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
				printf("ERROR, numero invalido\n");
			}
	}
}