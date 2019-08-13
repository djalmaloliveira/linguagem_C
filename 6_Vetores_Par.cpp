/*
6. Faça uma função que recebe um vetor X(15) de inteiros 
por parâmetro e retorna a quantidade de valores pares em X.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ContaPares(int Vet[15]){
int iPar;

	for(int i=0;i<15;i++){
		
		printf("\n%d - Vetor2 =%d",i,Vet[i]);
		if(Vet[i]%2==0)iPar++;
	}

	return iPar;	
};


main(){

    int Vet[15], iP;
    srand(time(NULL));
    
    for(int i=0;i<15;i++)
    {
    	Vet[i] = rand() % 100; 
	}

	iP = ContaPares(Vet);
	
	printf("\n\n1- A quantidade de numeros pares eh: %d",iP);
	
}

