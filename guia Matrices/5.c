#include <stdio.h>
#include <stdlib.h>
main() {
	int i,j;
	char a[8][8];
		for(i=0;i<=7;i++){
			for(j=0;j<=7;j++){
				if(i==1||i==6){
					a[i][j]='P';					
				}
				else if((i==0&&j==0)||(i==0&&j==7)||(i==7&&j==0)||(i==7&&j==7)){
					a[i][j]='T';					
				}
				else if((i==0&&j==1)||(i==0&&j==6)||(i==7&&j==1)||(i==7&&j==6)){
					a[i][j]='C';					
				}
				else if((i==0&&j==2)||(i==0&&j==5)||(i==7&&j==2)||(i==7&&j==5)){
					a[i][j]='A';					
				}
				else if((i==0&&j==3)||(i==7&&j==3)){
					a[i][j]='M';					
				}
				else if((i==0&&j==4)||(i==7&&j==4)){
					a[i][j]='R';					
				}
				else{
					a[i][j]=' ';
				}	
		}
	}
	for(i=0;i<=7;i++){
		printf("\n");
		for(j=0;j<=7;j++){
			printf("%c",a[i][j]);			
		}
	}
						
}
