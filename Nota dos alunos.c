#include <stdio.h>

int main (){
	int notas [10] [3];
	float mediaaluno [] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
	float mediateste [] = {0.0, 0.0, 0.0};
	int i, j;
	
	for (i=0; i<10; i++){
		for (j=0; j<3; j++){
			printf("O aluno %d tirou na nota  %d  o valor: ", i+1, j+1);	
   	      	scanf("%f", &notas[i][j]);		
			}
		}
	
	for (i=0; i<10; i++){
		for (j=0; j<3; j++){
			mediaaluno [i] = mediaaluno[i] + notas [i] [j];
			mediateste [j] = mediateste [j] + notas [i] [j];
			}
		}
   	
	for (i=0; i<10; i++) {
		mediaaluno[i] = mediaaluno[i] /= 3.0;
		} 
		   	
   	for (j=0; j<3; j++) {
	   mediateste[j] = mediateste[j] /= 10.0;
	   }     
	

	printf("\n");
	printf("Medias ... \n");
	
	for (i=0; i<10; i++){
		printf("O aluno %02d: ", i+1);
		for (j=0; j<3; j++)
   	      {
   	      printf("%5.2f ", notas [i][j] );	
		  }
	   printf(" => %5.2f \n", mediaaluno[i]); 
   	   }
		
   
   printf("Media dos testes:  ");
   
   for (j=0; j<3; j++)
      printf(" %5.2f", mediateste[j]);
   
   printf("\n");

   			
		
 
	    	
	return 0;
}
