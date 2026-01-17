#include <stdio.h>

#define tam 30

int main(){
	
	float gastos[] = { 0, 23.45, 0, 28.89, 31.21,  
						0, 40.54, 65.47, 35.75, 0,
						18.98, 28.92, 0, 49.42, 20.29,
						0, 47.81, 0, 32.63, 91.78, 
						20.90, 39.09, 16.53, 33.64, 0, 
						21.91, 28.37, 0, 51.27, 0};
	
	float soma, media, maior, menor;
	int maiorvalor;
	int i;
	
	maior = gastos[0];
	menor = gastos[0];
	
	for(i=0; i<tam; i++){
	soma = soma + gastos[i];
	
	if(gastos[i] > maior){
		maior = gastos[i];
		maiorvalor = i+1;	
		}	
	}
	
	media = soma/30;
	
	printf(" \n");
	printf("Total de gastos no mes = R$ %.2f \n", soma);
	printf(" \n");
	printf("Media de gastos no mes = R$ %.2f \n", media);
	printf(" \n");
    printf("Dia com o maior gasto = R$ %.2f \n", maior);
    printf(" \n");
    
    for (i=0; i<tam; i++){
	if (gastos[i] > media)
	    	{	  
			printf("%d(%.2f) ", i+1, gastos[i]);
			}
		}
    
    
	return 0;
}
