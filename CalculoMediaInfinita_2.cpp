/*
/*Programa para calcular a media entre varios valores. O total de termos � indefinido,
/*ao final ser� apresentado a media de todos os dados inseridos.
*/
#include <stdio.h>

main(){

	float num = 1, res;
	int count = 0;

	printf("\nPrograma para calcular a media de varios numeros");
	printf("\n\nInforme o valor 0(zero) para realizar a media.");

	do{
		count++;  
		printf("\n\nInforme o proximo numero(%d): ",count);
		scanf("%f",&num);
		res = res + num;		
	}while(num!=0);
	
	printf("\n\nA media dos %d numeros eh: %.2f",(count - 1),res/(count - 1));
	printf("\n\n");	

	return 0;
}

