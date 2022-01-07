#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Comprobar si es un caracter en miniscula o mayuscula */

main() {
    char c;
    printf("Ingrese un caracter en minuscula: ");
    int number;	
	do{
		int temp;
		number=0;
		scanf("%c",&c);
			if (isdigit(c) != 0)
      	      number=1;
		if(number==1){
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Entrada invalida... ingrese solo letras:");
			}
	}while(number==1);

    if (c >= 'a' && c <= 'z')
 		printf("La letra %c es minuscula\n",c);  	
	else if(c >= 'A' && c <= 'Z')
		printf("La letra %c es mayuscula\n",c);
	else
	printf("%c no es una letra\n",c);  		
getche();
}