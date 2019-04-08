/*
Autor: Djalma - data: 07/04/2019 
5) Faça um programa que leia dois números. 
Caso a soma dos dois números apresente um número
par e seja maior que 100 mostre a metade da soma na tela, 
se a soma for um número par menor que 100, mostre a soma multiplicada por 2. 
Se a soma resultar em um número ímpar apenas apresente a soma.

res1 = num1 + num2
res2 = res1 % 2;

se res2 = 0(par); se res1 > 100 = res1 / 2;
se res2 = 0(par); se res1 < 100 = res1 * 2;
se res2 <> 0(impar); = res1 

*/	
#include <stdio.h>
#include <stdlib.h>

main(){
	
	float num1,num2,res1,res2;
	int res3;
	
	printf("Calcula entre dois numeros\n\n");
	printf("Informe o Primeiro numero: ");
	scanf("%f", &num1);

	printf("Informe o Segundo numero: ");
	scanf("%f", &num2);
	
	res1 = num1 + num2;
	res3 = num1 + num2;
	
	if(res3%2 == 0){
		if(res1 >100) {
			printf("\nA soma eh maior que 100, isso dividido por 2 eh: %.2f",res1/2);
		}else {
				printf("\nA soma eh menor que 100, isso multiplicado por 2 eh: %.2f",res1*2);
		}
	}else{
		printf("\nComo a soma eh impar o valor final eh:%.2f ",res1);
	}
/*
se res2 = 0(par); se res2 > 100 = res1 / 2;
se res2 = 0(par); se res2 < 100 = res1 * 2;
se res2 <> 0(impar); = res1 

*/

	
	printf("\n\n");

	return 0;

}

