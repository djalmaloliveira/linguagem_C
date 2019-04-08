/*
/*	Programa que trabalha com Select Case
1: Sul
2: Norte
3: Leste
4: Oeste
5 ou 6: Nordeste
7 ou 8: Sudeste
9 ou 10: Centro-oeste
11: Nordeste
Outro código: importado
*/
#include <stdio.h>
#include <stdlib.h>



main(){

	int produto;
	printf("Informe o codigo do produto: \n");	
	scanf("%f", &produto);


		switch (produto)
		{
		   case 1:
		     printf(" 1 - Produzido no Sul: \n");
		   break;		
		   case 2:
		     printf(" 2 - Produzido no Norte: \n");
		   break;
		   case 3:
		     printf(" 3 - Produzido no Lests: \n");
		   break;
		   case 4:
		     printf(" 4 - Produzido no Oeste: \n");
		   break;
				
		   case 5:
		     printf(" 5 - Produzido no Nordeste: \n");
		   break;
		   case 6:
		     printf(" 6 - Produzido no Nordeste: \n");
		   break;		
		   case 7:
		     printf(" 7 - Produzido no Sudeste: \n");
		   break;		
		   case 8:
		     printf(" 8 - Produzido no Sudeste: \n");
		   break;		
		   case 9:
		     printf(" 9 - Produzido no Sudeste: \n");
		   break;		
				
				
				
				
				
				
				
				
				
				
		
		   default
		     printf("Produto importado \n");
		}


	return 0;

}

