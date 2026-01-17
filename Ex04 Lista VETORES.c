#include <stdio.h>

#define tam 30

int main ()
   {
   	float tempMediaMes [] = { 21.3, 22.0, 24.5, 21.1, 27.9,
	                          22.5, 23.4, 26.4, 26.5, 25.8,
							  30.2, 31.4, 29.9, 29.2, 28.0,
							  27.4, 27.2, 27.1, 25.8, 25.5,
							  25.1, 25.2, 25.0, 24.8, 24.7,
							  23.9, 22.8, 22.5, 23.7, 24.1 };
	
   	float media, soma, maior, menor;
	int diaMaior, diaMenor;
   	int pelomenos1;
   	int i;
   	
   	//
	maior = tempMediaMes [0];
	menor = tempMediaMes [0];
	//
	// calcular a soma, maior, menor...
	for (i=0; i<tam; i++)
	   {
	   //
	   // soma	
	   soma = soma + tempMediaMes[i];
	   //
	   // maior
	   if (tempMediaMes[i] > maior)
	      {
	      maior = tempMediaMes[i];
	      diaMaior = i+1;
	      }	
	      
	   //
	   // menor
	   if (tempMediaMes[i] < menor)
	      {
	      menor = tempMediaMes[i];
	      diaMenor = i+1;
	      }	
	      
	   }   
	   
	//
	media = soma / 30;
 
	   
	//
	// resultados
	printf(" \n");
	printf("-------------------------------------- \n");
	printf(" \n");
	printf("Media do Mes = %.2f graus \n", media);
	printf(" \n");
    printf("Dias com temperatura acima da media : \n");
    pelomenos1 = 0;
	for (i=0; i<tam; i++)
	   {
	   if (tempMediaMes[i] > media)
	      {	  
		  printf("%d(%.2f) ", i+1, tempMediaMes[i]);
		  pelomenos1++;
		  } 
       }
       
    if (pelomenos1 == 0)   
       printf("<nenhum>");

	printf(" \n\n");
    printf("Menor temperatura do mes : ");
	printf("dia %d (%.2f graus) ", diaMenor, menor);      

	printf(" \n");
    printf("Maior temperatura do mes : ");
	printf("dia %d (%.2f graus) ", diaMaior, maior);      

   	printf(" \n \n");
   	
   	
   	printf("-------------------------------------- \n");
   	
   return 0;	
   }
