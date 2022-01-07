#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void compar();
void numperft();
int comperft(int a);
int invertir(int a);
int int_input(char *msg,int min,int max);
main() {
	int num,numin,temp,cont=1;
	printf("Elija una de estas opciones ");
	printf("\n1 numeros pares e impares ");
	printf("\n2 numeros perfectos hasta el 100 ");
	printf("\n3 invertir un numero de 4 digitos ");
	num=int_input("",1,3);
	switch(num){
		case 1: compar();
			break;
		case 2: numperft();
			break;
		case 3: 
			printf("Ingrese un numero de 4 digitos ");
			do{
			numin=int_input("",-9999,9999);
			temp=abs(numin);
		    while(temp/10>0){
       			temp=temp/10;
        		cont++;
    		}
    		if(cont!=4)
    			printf("ERROR, ingrese un numero de 4 digitos ");
			}while(cont!=4);
			if(numin>0){
				printf("El numero invertido es: %d",invertir(abs(numin)));
			}
			else
				printf("El numero invertido es: -%d",invertir(abs(numin)));
			break;
	
	}

}
void compar(){
	int a;
	for(int i=1;i<=10;i++){
		scanf("%d",&a);
		if(a%2==0)
			printf("%d es par\n",a);
		else
			printf("%d es impar\n",a);
	}
}
int invertir(int a){
	int invrt=0,res;
	while(a!=0){
		res=a%10;
		a=a/10;
		invrt=invrt*10+res;
	}
	return(invrt);	
}
void numperft(){
	int n=0,i;
	for(i=2;i<=100;i++){
		n=comperft(i);
		if(n==1)
			printf("%d ",i);		
	}
}
int comperft(int a){
	int res=0;
	for(int i=1;i<a;i++){
		if(a%i==0){
			res+=i;
		}
	}
	if(res==a)
		return(1);
	else
		return(0);
	
	
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