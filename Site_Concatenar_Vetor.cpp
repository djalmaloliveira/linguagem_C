/* 
* autor: Vergil * data: 16/04/2007 
*/ 

#include <stdio.h>
#include <stdlib.h>

int main() {	

int vetorA[10], vetorB[10], vetorC[20], contar;		

// Lendo os valores do vetor A	

printf("Entre com os valores de A\n");	

	for(contar = 0; contar < 10; contar++) 
		{		 
		scanf("%d", &vetorA[contar]);	
		}		// Lendo os valores do vetor B
		
printf("Entre com os valores de B\n");	

	for(contar = 0; contar < 10; contar++) 
	{
		 scanf("%d", &vetorB[contar]);	
	}	// Gerando os valores do vetor C	
	
	for(contar = 0; contar < 20; contar++) 
	{
		if(contar < 10) 
		{	
			vetorC[contar] = vetorA[contar];		 
		} else 
		{
			vetorC[contar] = vetorB[contar - 10];		 
		}		 

		// Exibir os valores do vetor C		 
		printf("Posicao %d do vetor C: %d\n", contar, vetorC[contar]);
		
	};
	for (contar=0;contar<20;contar++){
		printf("%d", vetorC[contar]);
	}
	
system("pause");

}

