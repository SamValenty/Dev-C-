#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero01, numero02;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &numero01);
	
	printf("Digite o segundo numero:");
	scanf("%d", &numero02);
	
	if (numero01 > numero02)
	printf("Verdadeiro \n");
	else
	printf("Falso \n");
	
	return 0;

}
