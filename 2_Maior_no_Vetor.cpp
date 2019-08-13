/*
2. Faça uma função que receba um vetor de números inteiros e o seu tamanho
(quantidade de números do conjunto). Em seguida a função deve calcular e retornar
o maior valor do conjunto. Exemplo: se o vetor passado como argumento for [1, 5,
8, 7, 3], a função deve retornar 8.
*/
#include <stdio.h>
#include <stdlib.h>

int MaiorValor(int ivet[]){
	
	int itemp = 0;
	for(int x = 0;x<4;x++){		
		
		if(ivet[x]>itemp) {
           itemp = ivet[x];	
           printf("\n\nd% - O valor eh maior",x);
		}
		
		printf("\nValores do vetor: (%d)",ivet[x]);		
	}
	
	return itemp;
	
};


main(){

	int ivet[4];
	int itemp;
	
	printf("\nInsira 3 valores para ser adicionados");
	printf("\nInforme os valores: ");
	
	for(int i = 0; i<4; i++){
		printf("\n\n%d-Item: ",i);
		scanf("%d",&ivet[i]);			
	}
	
	itemp = MaiorValor(ivet);
	
	printf("\nO maior valor da relacao eh: %d",itemp);
}

