#include <stdio.h>

// 
// função opção 1...
float Media (float vet[], int tam)
{
	float soma;
	int i;
	
soma = 0;
	
for (i=0; i<tam; i++)
   {
   	soma = soma + vet[i];
   }	
	
return (soma/tam);	
}
// 
// função opção 2...
float NotaAluno (float vet[], int ind)
{
return (vet[ind]);
}
// 
// função opção 3...
void BubbleSort (float vetor[], int tamanho)
   {
   int i, j, temp;
   
   for (i = 0; i < tamanho - 1; i++)
      {
      for (j = 0; j < tamanho - 1; j++)	
         {
         if (vetor[j] < vetor[j + 1])
		    {
		    //
			// Trocar se estiver em ordem errada
			temp = vetor[j];
			vetor [j] = vetor [j+1];
			vetor [j+1] = temp;
			}	
		 }
	  }   	
   }

// 
// função opção 4...
int AprovadoOuReprovado (float vet[], int ind)
{
   if (vet[ind] >= 5.0)
       return 1;
   else
       return 0;	   	
}
// 
// função opção 5...
void MaiorNota (float vetNota[], int vetMat[], int tam)
{
	
int indice, i;
float maior;

maior = vetNota[0];

for (i=1; i<=tam-1; i++)	
   {
   if (maior < vetNota[i])	
      {
       maior = vetNota [i];
       indice = i;
	  }
   }  

printf("O aluno de matricula %d obteve a maior nota = %.2f \n", vetMat[indice], maior);  

}

// 
// função opção 6...
void MenorNota (float vetNota[], int vetMat[], int tam)
{
	
int indice, i;
float menor;

menor = vetNota[0];

for (i=1; i<=tam-1; i++)	
   {
   if (menor > vetNota[i])	
      {
       menor = vetNota [i];
       indice = i;
	  }
   }  

printf("O aluno de matricula %d obteve a menor nota = %.2f \n", vetMat[indice], menor);  

}


//
// PROGRAMA PRINCIPAL
int main ()
   {  
    
   int Matricula [10];
   //
   // 
   float Nota [10] = {4.5, 8.7, 6.9, 5.0, 3.4, 4.9, 7.3, 7.8, 4.8, 5.8 };
   float NotaTemp [10] = {4.5, 8.7, 6.9, 5.0, 3.4, 4.9, 7.3, 7.8, 4.8, 5.8 };
   
   int continua, opcao;
   
   float mediageral;
   
   float notAluno;
   
   int existe, indice, i;
   
   int numMat;
   
   //
   // Carregar matrículas e notas
   Matricula [0] = 74; 
   Matricula [1] = 111;
   Matricula [2] = 12;
   Matricula [3] = 65;
   Matricula [4] = 67;
   Matricula [5] = 143;
   Matricula [6] = 3;
   Matricula [7] = 99;
   Matricula [8] = 44;
   Matricula [9] = 101;
   
   // 
   // Aguardar opção escolhida
   continua = 1;
   do
      {
      	
      //
      // Apresentar o menu de opções
      printf(" \n");
      printf("Selecione uma das opcoes: \n \n");
      printf("   1 - Media Geral das notas da disciplina \n");
      printf("   2 - Nota Final de um determinado aluno \n");
      printf("   3 - Relacao das Notas Finais em ordem decrescente \n");
      printf("   4 - Aprovacao ou nao de um determinado aluno (>= 5.0 para aprovar) \n");
      printf("   5 - Qual a maior nota da disciplina e quem a tirou? \n");
      printf("   6 - Qual a menor nota da disciplina e quem a tirou? \n\n");
      printf("Opcao : \n");	
      scanf("%d", &opcao);
      
      //
      // executar a opção digitada
      if (opcao == 1)
         {
         mediageral = Media (Nota, 10);
		 //
		 printf("A media da disciplina eh %.2f \n", mediageral);	
		 }
	  //
	  //	 
      if (opcao == 2)
         {
         do
		    {
		    printf("Digite a matricula do aluno : ");
			scanf("%d", &numMat);
			//
			// testar se a matrícula é válidd
			existe = 0;
			for (i=0; i<10; i++)
			   {
			   	if (Matricula[i] == numMat)
			   	   {
				   existe = 1;
			   	   indice = i;
			       }    
			   }
			//
			if (existe)
			   {
			   	notAluno = NotaAluno (Nota, indice);
			   	printf("A nota do aluno %d = %.2f \n", Matricula[indice], notAluno);
			   }
			else
			   {
			    printf("Esse aluno nao existe, seu bobao... \n");
			   }   
					
			} while (existe == 0);	
		 }
	  //
	  //	 
      if (opcao == 3)
         {
         //
         // ordena o vetor
         BubbleSort(NotaTemp, 10);
   
         //
         // exibe o vetor ordenado...
         printf("\nNotas ordenados em ordem decrescente:\n");
         for (i=0; i<10; i++)
            {
            printf("%.2f ", NotaTemp[i]);	
	        }
         printf("\n");	
		 }
	  //
	  //	 
      if (opcao == 4)
         {
         do
		    {
		    printf("Digite a matricula do aluno : ");
			scanf("%d", &numMat);
			//
			// testar se a matrícula é válidd
			existe = 0;
			for (i=0; i<10; i++)
			   {
			   	if (Matricula[i] == numMat)
			   	   {
				   existe = 1;
			   	   indice = i;
			       }    
			   }
			//
			if (existe)
			   {
			   	if (AprovadoOuReprovado(Nota, indice))
			   	   printf("O aluno cuja matricula eh %d esta APROVADO !!!", Matricula[indice]);
			   	else
				   printf("Fazer de novo, pois o aluno de matricula %d esta REPROVADO !!!", Matricula[indice]);  
			   }
			else
			   {
			    printf("Esse aluno nao existe, seu bobao... \n");
			   }   
					
			} while (existe == 0);	
		 }
	  //
	  //	 
      if (opcao == 5)
         {
         MaiorNota (Nota, Matricula, 10);	
		 }
	  //
	  //	 
      if (opcao == 6)
         {
         MenorNota (Nota, Matricula, 10);
		 }
	  //
	  //	 
      if (opcao == 0)
         {
         //
		 continua = 0;	
		 }
	  else
	     {
	     //if ( (opcao != 1) && (opcao != 2) && (opcao != 3) && (opcao != 4) && (opcao != 5) && (opcao != 6) )
	     if ( opcao >= 7 )
		    {
		    printf("Opcao invalida !!! Tente novamente !!! \n");	
			} 
		 }
	  //
	  //
      printf(" \n\n");
      //
	  system("pause"); // Aguarda o usuário pressionar uma tecla
      system("cls");   // Limpa a tela no Windows
	  	
	  } while (continua == 1);	
	
	
	
   //
   // voltar para o menu de opções
   	
   return 0;	
   }

