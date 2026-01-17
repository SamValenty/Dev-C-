#include <stdio.h>

#define tam 15 

int main(){
	
	int num[tam];
	int i, media, soma; 
	
	for(i=0; i<tam; i++){
	printf("Digite um numero: ", i+1);
	scanf("%d", &num[i]);
	}
	
	for(i=0; i<tam; i++){
	soma = soma + num[i];
	}
	
	printf("soma eh = %d", soma);
	
	media = soma/15;
	
	printf(" \n");
	printf("Media eh = %d", media);
	printf(" \n");
	printf("Valores maiores que a media : ");
	printf(" \n");
	
	for(i=0; i<tam; i++){
		if(num[i] > media){
			printf (" %d ", num[i]);
			} 
		}
		
	
	
	
	return 0; 
}
