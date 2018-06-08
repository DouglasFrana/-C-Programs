//Developed by Douglas Frana//
//Videira - SC - Brasil//
//June, 08, 18//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5
#include <errno.h>

int main(){
  int vetor[MAX],
      i=0,
      j=0,
      aux=0;      
  
  for(i=0;i<MAX;i++){
    printf("Enter a number ");
    scanf("%d", &aux);
    vetor[i] = aux;
  }
   
  for(i=0;i<MAX;i++){                         //Taking the first number to compare
    for(j=i+1;j<MAX;j++ ){ 					 //Picking up the successor number to compare
      if (vetor[i]>vetor[j]){				//Comparing the two numbers
         aux=vetor[i];
         vetor[i]=vetor[j];
         vetor[j]=aux;
      }
    }
  } 
  
  printf("Ordered items: ");				//Printing the ordered vector
  for(i=0;i<MAX;i++){
    printf("%d, ",vetor[i]);
  }  
  
  
FILE * fp = fopen("BatataDoce.txt", "w+");
if (!fp) {
   perror(strerror(errno)); 			 	//Saving the vector
   return EXIT_FAILURE; 
}
 
	for(i=0;i<MAX;i++){
   fprintf(fp, "%d\n", vetor[i]);
		}
 
fclose(fp);

}
  

