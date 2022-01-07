#include <stdio.h>
#include <stdlib.h>

main() {
	int edad;
	float nota1,nota2,nota3;
	float promd;
	char nomb[20],apell[20];
	printf("Ingrese nombre y apellido");
	scanf("%s %s",nomb,apell);
	printf("Ingrese edad");
	scanf("%d",&edad);
	printf("Ingrese nota 1, nota 2, nota 3 en su respectivo orden:");
	scanf("%f %f %f",&nota1,&nota2,&nota3);
	promd = (nota1+nota2+nota3)/3;
	printf("Alumno %s %s, el calculo de su promedio es:%f",nomb,apell,promd);
	getche();

}