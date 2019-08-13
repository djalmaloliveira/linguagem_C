/*
5. Faça uma função que receba um dado que representa um tempo em horas, no
formato hh:mm:ss. Em seguida, converta a hora passada em segundos e retorne
este valor na função. Faça testes depois na função main().
*/
#include <stdio.h>
#include <stdlib.h>

int ConvereParaSegundos(int H, int M, int S){
	int conv;
	
	conv = H*3600 + M*60 + S;

	return conv;	
};


main(){

    int iC,ih,im,is;
	printf("\nConverte horas minutos e segundos em segundos");
	printf("\n\nConversao de Horas em Segundos ");
	printf("\nInforme quantas horas:");
	scanf("%d",&ih);
	printf("\nInforma quantas minutos:");
	scanf("%d",&im);
	printf("\nInforma quantas segundos:");
	scanf("%d",&is);
		
	iC = ConvereParaSegundos(ih,im,is);
	
	printf("\n\n1- A conversao em segundos eh %d",iC);
	
}

