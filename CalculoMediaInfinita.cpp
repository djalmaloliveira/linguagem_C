/*
/*Programa para calcular a media entre varios valores. O total de termos é indefinido,
/*ao final será apresentado a media de todos os dados inseridos.
*/
#include <stdio.h>

main(){

	float num = 1, res;
	int count = 0;

	printf("\nPrograma para calcular a media de varios numeros");
	printf("\n\nInforme o valor 0(zero) para realizar a media.");

	while(num!=0)
	{
		num = 0;
		count++;  
		printf("\n\nInforme o proximo numero(%d): ",count);
		scanf("%f",&num);
		res = res + num;		
	}	
	printf("\n\nA media dos %d numeros eh: %.2f",(count - 1),res/(count - 1));
	printf("\n\n");	

	return 0;
}

