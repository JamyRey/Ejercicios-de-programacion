#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void craps();
main() {
	char ini,basu;
    srand(time(NULL));
    do{
	printf("Desea iniciar un juego de Craps(s)? caso contrario(n)");
	ini=getchar();
	basu=getchar();
	if(ini=='s'||ini=='S'){
		craps();
	}
	}while(ini=='s'||ini=='S');
}
void craps(){
	int d1,d2,dsum,dsum2,end;
	d1=rand()%(6-1+1) + 1;
	d2=rand()%(6-1+1) + 1;
	dsum= d1+d2;
	printf("Has sacado %d\n",dsum);
		if(dsum==7||dsum==11){
				printf("Has ganado\n");
				return;
			}
		if(dsum==2||dsum==3||dsum==12){
				printf("Has perdido\n");
				return;
			}
		else {
			do{
				d1=rand()%(6-1+1) + 1;
				d2=rand()%(6-1+1) + 1;
				dsum2=d1+d2;
				printf("Has sacado %d\n",dsum2);
				if(dsum2==dsum){
					printf("Has ganado\n");
					return;						
				}
			}while(dsum2!=7);
			printf("Has perdido\n");
			return;
			}			
		}
