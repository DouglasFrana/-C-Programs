//Developed by Douglas Frana//
//Videira - SC - Brasil//
//June, 14, 18//

#include <stdio.h>
#include <stdlib.h>

main(){
	int i=0;
	int number;
	int cont;
	
	printf("What value do you want to check if it's prime? ")	;
	scanf("%d", &number);
	
	for (i=1;i<number;i++){
		  if (number%i==0) { 
         cont++;
		}
	}
	if (cont == 2){
  		  printf("Number %d is prime! ", number);
  	}else{
   		 printf("Number %d is not prime!", number);
}

}
