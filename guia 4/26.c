#include <stdio.h>
#include <stdlib.h>
main(){
	int b,v;
	float i,v1,v2,v3;
	printf("ingresar la cantidad de bolestas");
	scanf("%d",&b);
	for(b;b>0;b--){
		printf("ingrese vendedor(1 a 3)");
		do{scanf("%d",&v);
			if(v<1||v>3)
				printf("ERROR, vendedor no existente");				
		}while(v<1||v>3);
		printf("ingresar importe");
		scanf("%f",&i);

		switch(v){
		case 1: v1+=(i*0.05);
		break;
		case 2: v2+=(i*0.05);
		break;
		case 3: v3+=(i*0.05);
		break;		
		}
	}
	printf("Vendedor 1 gano=%f\nVendedor 2 gano=%f\nVendedor 3 gano=%f\n",v1,v2,v3);

}