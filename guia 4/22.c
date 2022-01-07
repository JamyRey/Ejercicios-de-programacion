#include <stdio.h>
#include <stdlib.h>
main(){
	float a,i,p,n=1;
	for(i=1;i<=10;i++){
		printf("ingrese un numero ");
		scanf("%f",&a);

		if(a>=0){
			p+=a;
		}
		else if(a<0)
			n*=a;		
	}
	printf("Positivos=%f\nnegativos=%f",p,n);
}