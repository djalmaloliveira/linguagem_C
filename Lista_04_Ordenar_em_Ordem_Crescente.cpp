/*
Autor: Djalma - data: 05/04/2019 
2) Crie um programa que leia 3 números inteiros diferentes e 
imprima os números em ordem crescente.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int num1,num2,num3, numt;
	
	printf("Ordenar 3 numeros em ordem crescente\n\n");
	printf("Informe o primeiro numero:\n");
	scanf("%d", &num1);
	
	printf("Informe o segundo numero:\n");
	scanf("%d", &num2);
	
	printf("Informe o terceiro numero:\n");
	scanf("%d", &num3);
	
	if (num1>num2){
		numt = num1;
		num1 = num2;
		num2 = numt;		
	}

	if (num2>num3){
		numt = num2;
		num2 = num3;
		num3 = numt;		
	}
	
	printf("A ordem dos numero eh: %d, %d, %d", num1,num2,num3);

	return 0;

}

