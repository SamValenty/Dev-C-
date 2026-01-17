#include <stdio.h>

#define tam 15

int main ()
   {
   	
	int vet[tam];
	int media, soma;
	int pelomenos1;
   	int i;
   	
   	//
	//
   	for (i=0; i<tam; i++)
   	   {
   	   printf ("Digite o %do numero : ", i+1);
   	   scanf ("%d", &vet[i]);
	   }
	   
	//
	// calcular a media...
	for (i=0; i<tam; i++)
	   {
	   soma = soma + vet[i];
	   }   
	   
	//
	media = soma / 15;
	
	// resultados
	printf(" \n");
	printf("-------------------------------------- \n");
	printf(" \n");
	printf("Media = %d \n", media);
	printf(" \n");
    printf("Valores maiores que a media : ");
    pelomenos1 = 0;
	for (i=0; i<tam; i++)
	   {
	   if (vet[i] > media)
	      {	  
		  printf("%d ", vet[i]);
		  pelomenos1++;
		  } 
       }
       
    if (pelomenos1 == 0)   
       printf("<nenhum>");
	      
   	printf(" \n \n");
   	printf("-------------------------------------- \n");
   	
   return 0;	
   }
