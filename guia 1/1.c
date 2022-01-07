#include <stdio.h>
#include <stdlib.h>
main() {
 int op,ced,sal,vonull;
 int vo1=0,vo2=0,vo3=0;
 
 	do{
		printf("Ingrese cedula");
		scanf("%d",&ced);		
 		printf("Ingrese voto");
 		printf("\n1 Pedro");
 		printf("\n2 Maria");
 		printf("\n3 Juan");
		scanf("%d",&op);
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
		printf("Desea ingresar otro votante?(1) Cualquier otra opcion imprimira los resultados");
		scanf("%d",&sal);
	 }while(sal==1);
	printf("Cantidad de votos por participante\nPedro: %d\nMaria: %d\nJuan: %d\nVotos nulos: %d",vo1,vo2,vo3,vonull);
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
	