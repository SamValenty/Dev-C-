#include <stdio.h>
#include <stdlib.h>

int main () {
	float soma, media, contador, compara, maior, menor, cont, num, n1, n2, n3, n4, n5; 
	
	contador = 1;
	while (contador <= 5){
	
		printf("Digite o %fo. numero : ", contador);
		scanf("%f", &num);
	
		switch (contador)
			{
			case 1: n1 = num; break;
			case 2: n2 = num; break;
			case 3: n3 = num; break;
			case 4: n4 = num; break;
			case 5: n5 = num; break;	
			}
	
			contador++;
    		}

	soma = n1 + n2 + n3 + n4 + n5;

	media = soma / 5;
		
	cont = 1;
	maior = n1;
	compara = n2;

	while (num <= 4)
		{
		if (maior >= compara) {
		}
		else {
			maior = compara;
			}
			
		switch (cont)
			{
			case 1: compara = n3; break;
			case 2: compara = n4; break;
			case 3: compara = n5; break;
			}
		
		cont++;
		}
		
	cont = 1;
	maior = n1;
	compara = n2;
	while (num <= 4)
		{
		if (maior <= compara) {
		}
		else {
			menor = compara;
			}
			
		switch (cont)
			{
			case 1: compara = n3; break;
			case 2: compara = n4; break;
			case 3: compara = n5; break;
			}
		
		cont++;
		}
	
	
	float numpares, medianumapares;
		
	cont = 1;
	numpares = 0;
	medianumpares = 0.0;
	
	while (cont <= 5)
	   {
	   
	   switch (cont)
	       {
	       case 1: compara = n1; break;
	       case 2: compara = n2; break;
	       case 3: compara = n3; break;
	       case 4: compara = n4; break;
	       case 5: compara = n5; break;
		   }   

	   if (compara % 2 == 0)
	      {
    
          numpares++;
          medianumpares = medianumpares + compara;
		  }
	   else{
		}	  

	   cont++;   
       }  
        
    if (numpares !=0)   
       medianumpares = medianumpares / numpares;
    else
	   medianumpares = 0.0;   
	
	float percentualpares;
	
	percentualpares = (100.0 * numpares) / 5.0;
	
	printf ("Soma = %f \n", soma);
	printf ("Media = %.2f \n", media); 
	printf ("Maior numero = %f \n \n", maior);
	printf ("Menor numero = %f \n \n", menor);
	printf ("Media dos numeros pares = %.2f \n \n", medianumpares);
	printf ("Percentagem de numeros pares = %.2f %% \n \n", percentualpares);
  
	return 0; 
	}
