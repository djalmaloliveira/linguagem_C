/*
Autor: Djalma - data: 27/03/2019 
1) Escreva um Algoritmo para ler uma temperatura em graus Centígrados e 
apresente-a convertida em graus Fahrenheit. A fórmula é: F = (9 * C + 160)/5
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int temperatura,resultado;
	
	printf("Converte Temperatura para Fahrenheint\n\n\n");
	printf("Informe a temperatura em Centrigrados:\n");
	scanf("%d", &temperatura);
	
	resultado = (9 * temperatura + 160)/5;
	
	printf("\n\nA temperatura em Fahrenheint eh %d F\n", resultado);
	
	return 0;

}

