/*
8. Faça uma função que receba uma matriz 4x4 como parâmetro e em seguida
retorne o número da linha que contém a maior soma da matriz inteira.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int iLinhas;

int Calcula_SomaMatriz(int Vet[4][4]){
	int iSoma = 0;int iMaior=0;int iLinha=1;
    for(int i=0;i<4;i++)
    {
  		printf("\n");
    	for(int y=0;y<4;y++){		    
    		printf("\t%d",Vet[i][y]); 
			iSoma = iSoma + Vet[i][y];			
			
		    if(iSoma>iMaior){
				iMaior = iSoma;
				iLinhas = y;
			}
		}		
    	printf("\t1 - Na linha %d na lnha ", iLinha,iLinhas ) ;
    	
	}
	return iSoma;	
};


main(){

    int Vet[4][4], iM;
    srand(time(NULL));
    
    for(int i=0;i<4;i++)
    {
    	for(int y=0;y<4;y++){
    		Vet[i][y] = rand() % 100; 
		}
    	
	}


	iM = Calcula_SomaMatriz(Vet);
	printf("\n");
    printf("\t(A soma: %d) na linha %d",iM,iLinhas ) ;
}

