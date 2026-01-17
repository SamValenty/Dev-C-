#include <stdio.h>
//https://www.calconi.com/pt/numeros_aleatorios/calculadora.php
#define tam 30 

int main(){
	
	float temperatura [] ={ 29.5, 23.4, 26.2, 28.8, 31.2,  
							30.9, 20.5, 30.0, 35.7, 16.5,
							28.7, 28.9, 26.3, 19.4, 20.2,
							37.3, 17.8, 29.5, 32.6, 31.7, 
							26.9, 19.0, 24.1, 33.6, 24.4, 
							36.5, 28.3, 34.6, 31.2, 21.0};
	
	float soma, media, maior, menor;
	int maiortemp, menortemp;
	int i;
	
	maior = temperatura[0];
	menor = temperatura[0];
	
	for(i=0; i<tam; i++){
	soma = soma + temperatura[i];
	
	if (temperatura[i] > maior)
	      {
	      maior = temperatura[i];
	      maiortemp = i+1;
	      }	

	if (temperatura[i] < menor)
	      {
	      menor = temperatura[i];
	      menortemp = i+1;
	      }	
	}
	
		
	media = soma/30;
	
	printf(" \n");
	printf("Media da temperatura no mes = %.2f graus \n", media);
	printf(" \n");
    printf("Dias com temperatura acima da media : \n");
	

	for (i=0; i<tam; i++){
		if (temperatura[i] > media)
	    	{	  
			printf("%d(%.2f) ", i+1, temperatura[i]);
			}
		}
		
	printf(" \n \n");
    printf("Maior temperatura do mes : ");
	printf("dia %d (%.2f graus) ", maiortemp, maior);      

	printf(" \n \n");
    printf("Menor temperatura do mes : ");
	printf("dia %d (%.2f graus) ", menortemp, menor);      
	
	return 0;
}
