//Developed by Douglas Frana//
//Videira - SC - Brasil//
//June, 07, 18//


#include <stdio.h>
#include <stdlib.h>
#define MAX  3

main(){
	int idade;
	int i;
	int escolha;
	
	int vet[MAX];
	int vet2[MAX];
	int ultimo=0;									//For use of the normal age vector
	int primeiro=0;
	int total=0;
	
	
	int cont=1;
	int ultimo2=0;
	int primeiro2=0;								//For use of the second vector (Preferential)
	int total2=0;
	int cont2=100;									//Cont 100, to distribute passwords from 100 to preferential
	
	
	for(i=0;i<MAX;i++){
		vet[i]=NULL;							//Zeroing vectors to not print memory garbage
		vet2[i]=NULL;
	}										

	for(;;){
		printf("What do you want to do? 1=Insert, 2=Remove, 3=Print ");
		scanf("%d", &escolha);
		if(escolha==1){
			printf("How old is the person? ");
			scanf("%d", &idade);
			if(idade<60){
				if(total<MAX){
					if(ultimo==(MAX-1)){													 		//If it is the last element, focus for next go in place 0
						vet[ultimo]=cont;
						ultimo=0;
						printf("Successfully added element with password %d  \n\n", cont);
						total++;
						cont++;
					}else{
						vet[ultimo]=cont;
						ultimo++;
						total++;
						printf("Successfully added element with password %d \n \n", cont);
						cont++; 
					}
				}else if(total=MAX){
					printf("Vector Full! \n\n");
				}	
			}else if(idade>60){
				if(total2<MAX){
					if(ultimo2==(MAX-1)){
						vet2[ultimo2]=cont2;
						ultimo2=0;
						printf("Successfully added element with password %d  \n\n", cont2);
						total2++;
						cont2++;
					}else{
						vet2[ultimo2]=cont2;
						ultimo2++;
						total2++;
						printf("Successfully added element with password %d \n \n", cont2);
						cont2++; 
					}
				}else if(total2=MAX){
					printf("Vector full! \n\n");
				}	
				
		}
		
		
		}else if(escolha==3){
			printf("\nNormal row: ");
			for(i=0;i<MAX;i++){
			printf("%d ,", vet[i]);
			}
			printf("\n");
			printf("Preferred row: ");
			for(i=0;i<MAX;i++){
			printf("%d ,", vet2[i]);
			}
			printf("\n\n\n");
			
			
			
		}else if(escolha==2){
			if(total2==0){
				if(total==0){
					printf("Empty vector!! \n\n");
				}else if (primeiro==(MAX-1)){
					vet[primeiro]=NULL;
					primeiro=0;			
					total--;
					printf("Element successfully removed! \n\n");
				}else{
				vet[primeiro]=NULL;
				primeiro++;
				total--;
				printf("Element successfully removed! \n\n");
				}
			}else{
					if(total2==0){
					printf("Empty vector!! \n\n");
				}else if (primeiro2==(MAX-1)){
					vet2[primeiro2]=NULL;
					primeiro2=0;			
					total2--;
					printf("Element removed! \n\n");
				}else{
				vet2[primeiro2]=NULL;
				primeiro2++;
				total2--;
				printf("Element removed! \n\n");
				}
			}
		}
	}
}
