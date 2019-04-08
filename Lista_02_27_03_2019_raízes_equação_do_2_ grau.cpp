/* 
Autor: Djalma - data: 27/03/2019 
2) Construa um algoritmo para calcular as raízes de uma equação do 2° grau (ax² + bx + c) sendo que
os valores de a, b e c são fornecidos pelo usuário. Considere que a equação possui duas raízes reais.

Delta = b^2 - 4.a.c
Linha1 = (-b + Raiz(Delta))/2 * a
Linha2 = (-b - Raiz(Delta))/2 * a
*/ 

#include<stdio.h>
#include<math.h>

int a, b, c, delta;
float Valor1, Valor2;

main(){
	
	
	printf("Calculo de Bascara\n");
	printf("\nEntre com os valores de ´a´");	
	scanf("%i", &a);	
	
	printf("\nEntre com os valores de ´b´");	
	scanf("%i", &b);	

	printf("\nEntre com os valores de ´c´");	
	scanf("%i", &c);	

	delta = (b*b-4*(c*a));
	
	printf("\nO valor do Delta eh: %d",delta);
	
	Valor1 = 0;
	if (delta >0 ){
		Valor1 = ((-1*b)+sqrt(delta))/(2*a);
		printf("\nValor1 : %.2f",Valor1);
		
		Valor2 = ((-1*b)-sqrt(delta))/(2*a);
		printf("\nValor2 : %.2f",Valor2);
		
	}else{
		printf("\nNao tem valor definido para delta menor que zero");
	}	
		
}


