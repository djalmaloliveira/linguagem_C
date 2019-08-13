/*
4. Faça uma função que recebe uma matriz 5x5 como parâmetro e em seguida
retorna a soma da diagonal primária da matriz.
*/
#include <stdio.h>
#include <stdlib.h>

int CalculoDiagonal(int M[5][5]){

	int iS = 0;
	for (int x=0;x<5;x++){
		
		iS = iS + M[x][x];	
	}

	return iS;
	
	
};


main(){

    int M[5][5], iSoma;
	printf("\nCalculo a diagonal da Matriz");
	printf("\nMatriz tamanho 5 x 5 ");

	for (int x = 0; x < 5;x++){
		for (int y = 0;y <5;y++){			
			M[x][y]= ((x+3)*(y+2));			
		}
	}
	printf("\n\n Mostra a Matriz quadrada\n");
		for (int x = 0; x < 5;x++){
			printf("\n");
		for (int y = 0;y <5;y++){			
			printf("%d\t",M[x][y]);			
		}
	}
	
	iSoma = CalculoDiagonal(M);
	printf("\n\n2- A soma na diagonal da matriz eh %d",iSoma);
	
}

