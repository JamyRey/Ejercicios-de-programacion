#include <stdio.h>
#include <stdlib.h>

int int_input(char *msg,int min,int max);

main(){
  int i;
  i=int_input("introducir valor ascii(0 al 255)",0,255); 
      printf("%d\t-\t%c", i, i);

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