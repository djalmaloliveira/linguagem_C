/*
/*	Programa que trabalha com idades do adolescente
*/
#include <stdio.h>
#include <stdlib.h>



main(){
	int idade;
	
	printf("Informe a idade:");
	
	scanf("%d",&idade);
	
	if(idade > 12 && idade > 18){
		printf("Como a idade ej de %d, entao a pessoa eh um adolescente",idade);
		
	};
	
	if(idade > 18){
		printf("Como a idade eh de %d, entao a pessoa eh um adulto",idade);				
	}
	

	if(idade < 12){
		printf("Como a idade eh de %d, entao eh uma crianca",idade);				
	}	
	



	return 0;

}

