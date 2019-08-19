/*
7. Faça uma função que recebe um vetor X(10) por parâmetro e em seguida calcula
e retorna o menor valor do vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Calcula_o_Menor(int Vet[10]){
int iMenor = 1000000;
	
	for(int i=0;i<10;i++){
		
		printf("\n%d - Vetor = %d",i,Vet[i]);
		if(Vet[i]<iMenor)iMenor=Vet[i];
	}

	return iMenor;	
};


main(){

    int Vet[10], iM;
    srand(time(NULL));
    
    for(int i=0;i<15;i++)
    {
    	Vet[i] = rand() % 100; 
	}

	iM = Calcula_o_Menor(Vet);
	
	printf("\n\n1- O menor valor dentre todos eh: %d",iM);
	
}

