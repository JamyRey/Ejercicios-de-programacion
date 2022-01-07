#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int DecimaoOctal(int decimal);
main(){
  int i,d,number;
  char a;
	printf("Ingrese un caracter");
		scanf("%c",&a);
	d= a -48;
    printf("%c\t-\tDecimal %i\t-\tOctal %i\t-\tHexal %X",a,a,DecimaoOctal(a),a);

}
int DecimaoOctal(int decimal){
    int octal = 0, i = 1;
    while (decimal != 0){
        octal+=(decimal % 8)*i;
        decimal/=8;
        i*=10;
    }
    return octal;
}