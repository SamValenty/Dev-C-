#include <stdio.h>

int main()

   {
   	//
   	//
	printf(" ----------------------\n");
	printf("|                      |\n");
	printf("|  MINHA CALCULADORA   |\n");
	printf("|                      |\n");	   
	printf(" ----------------------\n"); 
	printf("|                      |\n");
	printf("|Selecione...          |\n");
	printf("|                      |\n");
	printf("|   + -> Adicao        |\n");
	printf("|   - -> Subtracao     |\n");
	printf("|   * -> Multiplicacao |\n");
	printf("|   / -> Divisao       |\n");
	printf("|                      |\n");
	printf(" ----------------------\n"); 
	
	char operacao;	
    float numero1, numero2, resultado;
   
   // 
   // SOLICITAR A OPERAÇÃO DESEJADA
   operacao = getchar();
   //scanf("%c", &operacao);
   
   numero1 = numero2 = 0.0;

   // 
   // SOLICITAR OS NÚMEROS
   printf("1o numero : ");
   scanf("%f", &numero1);
   printf("2o numero : ");
   scanf("%f", &numero2);
   
   //
   // SOLICITAR O NÚMEROS DA OPERAÇÃO
   
   //
   // 
   if (operacao == '+')
      {
      //
	  printf("\n");
	  printf("Adicao..... resultado : ");
	  resultado = numero1 + numero2;
	  printf("%f \n", resultado);
	  }
   else
      {
      // 
      if (operacao == '-')
         {
         //
         printf("\n");
         printf("Subtracao..... resultado : ");
      	 resultado = numero1 - numero2;
	     printf("%f \n", resultado);
	     }	
	  else
	     {
	     // 
         if (operacao == '*')
            {
            //
            printf("\n");
            printf("Multiplicacao..... resultado : ");
      	    resultado = numero1 * numero2;
	        printf("%f \n", resultado);
      	    }
		 else
		    {
		    // 
            if (operacao == '/')
               {
               //
               printf("\n");
               printf("Divisao..... resultado : ");
      	       resultado = numero1 / numero2;
	           printf("%f \n", resultado);
 	           }
			else
			   {
			   // 
			   printf("Operacao nao reconhecida... Escolha uma operacao valida \n \n");
			   }   	
			}		
		 }   
	  }
   // 
   

   return 0;
   }
