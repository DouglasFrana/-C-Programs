//Developed by Douglas Frana//
//Videira - SC - Brasil//
//June, 07, 18//

#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main(){
	int i=0;
	int desejo;
	int pilha[MAX];
	int j=0;
	
	for(;;){
	printf("Menu: 1=Insert, 2=Remove, 3=Print  ");
	scanf("%i", &desejo);		
	 	if(desejo==1){
	 		if(i==MAX){
	 			printf("Vector full! \n\n");
			 }else{
    		printf("Enter the value you want to insert: ");
    		scanf("%i",&pilha[i]);
    		pilha[i+1]=0;
			i++;
			printf("\n");
			}
		}
		
		if(desejo==2){	
		if(i==0){
			printf("Empty vector! \n");
		}else{
			pilha[i-1]=0;
			i--;
			printf("Value removed! \n \n");
			}
		}
		
		if(desejo==3){
			printf("\n");
			for(j=0;j<i;j++){
			printf("%d ", pilha[j]);
			}
			printf("\n\n");
		}
    }
    
    
	
}
