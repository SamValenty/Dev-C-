#include <stdio.h>
#define tam 10

float calcularmedia (float nota)
	{
	float mediacalculada;

	mediacalculada = nota / 10;
	
	return mediacalculada;
	}	

int main(){
	 
	int Matricula[] = {074, 111, 012, 065, 067, 143, 003, 074, 044, 101};
	float Notas[] = {4.5, 8.7, 6.9, 5.0, 3.4, 4.9, 7.3, 7.8, 4.8, 5.8};
	float soma, media;
	float maior, menor;
	int i;
	
	
	int opcao;
	
	
	printf("Escolha uma das opcoes \n");
	printf("1 - Media geral das notas da disciplina \n");
	printf("2 - Nota final de determinado aluno \n");
	printf("3 - Relacao das notas finais em ordem descrecente \n");
	printf("4 - Aprovacao ou nao do aluno \n");
	printf("5 - Maior nota da turma \n");
	printf("6 - Menor nota da turma \n");
	printf("0 - Fechar o programa \n");
	
	printf("\n");
	printf("Selecione uma opcao: ", opcao);
	scanf("%d", &opcao);
	
	if(0 < opcao < 7)
		{
		if(opcao = 1)
			{
			for (i=0; i<tam; i++)
				{
				soma = soma + Notas[i];
				}
				
			media = calcularmedia(soma);
				
			printf("A media geral das notas foi = %.2f \n", media);
			
			}
			else{
				if(opcao = 2)
					{
					for (i=0; i<tam; i++)
						{
							Matricula[i] = Notas[i];
						}
						
					printf ("A nota final dos alunos foram: %d = %.2f \n");	 
					}
					else{
						if(opcao = 3)
							{
								
							}
							else{
								if(opcao = 4)
									{
									if(Notas[i] >= 7.0)
										{
									
										}
									}
									else{
										if(opcao = 5)		
											{
												
											}
											else{
												if(opcao = 6)
													{
														
													}
													else{														
															
														}																										
														
												}
										}
								}
							
						}
				}
		}	
	
	
	return 0;
}
