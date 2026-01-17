#include <stdio.h>

#define tam 12

int main ()
   {
   	float faturamento [] = { 35000.00, 18500.00, 23800.00, 25000.00,
	                   13900.00, 7800.00, 21900.00, 30000.00,
					   16600.00, 24100.00, 26500.00, 42400.00 };
	float salarioano[tam];
	float salariomes = 2000.00;
	float salariototalano = 0.0;
   	float soma;
   	int i;
   	
   	//
	
	//
	// calcular mês a mês...
	for (i=0; i<tam; i++)
	   {
	   salarioano [i] = salariomes + (faturamento[i] * 0.015);
	   salariototalano = salariototalano + salarioano [i];
	   }   
	   
	//
	// resultados
	printf(" \n");
	printf("-------------------------------------- \n");
	
	for (i=0; i<tam; i++)
	   {
	   printf("%3.2f \n", salarioano[i]);
	   }   

   	printf(" \n");
   	printf("Valor total recebido no ano = %2f \n", salariototalano);
   	printf(" \n");
   	printf("-------------------------------------- \n");
   	
   return 0;	
   }
