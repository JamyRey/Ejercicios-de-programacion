#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {
int mes,dia,cant;
printf("Ingrese dia(numerico)");
do{
scanf("%d",&dia);
if(!(dia>=1&&dia<=31))
	printf("ERROR, ingrese un dia valido");
}while(!(dia>=1&&dia<=31));
printf("Ingrese mes(numerico)");
do{
scanf("%d",&mes);
if(!(mes>=1&&mes<=12))
	printf("ERROR, ingrese un mes valido");
}while(!(mes>=1&&mes<=12));
if(mes==1){
 	cant=dia; 		
	 }
if(mes==2){
	cant=dia+31; 		
	 }
if(mes==3){
	cant=dia+59; 		
	 }
if(mes==4){
	cant=dia+90; 		
	 }
if(mes==5){
	cant=dia+120; 		
	 }
if(mes==6){
	cant=dia+151; 		
	 }
if(mes==7){
	cant=dia+181; 		
	 }
if(mes==8){
	cant=dia+212; 		
	 }
if(mes==9){
	cant=dia+243; 		
	 }
if(mes==10){
	cant=dia+273; 		
	 }
if(mes==11){
	cant=dia+304; 		
	 }
if(mes==12){
	cant=dia+334; 		
	 } 
 printf("desde el 1 de enero, han pasado %d dias",cant);
 
getche();
}