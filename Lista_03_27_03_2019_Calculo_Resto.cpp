/* 
* autor: Djalma * data: 27/03/2019 
3) Faça um programa que receba um valor em R$ (inteiro). 
Em seguida, calcule em quantas notas de
100, 50, 20, 10, 5, 2 e 1 o valor pode ser dividido, 
utilizando o menor número possível de notas. Por
exemplo, para a entrada de R$ 357, imprima o resultado 
no seguinte formato:
*/ 

#include<stdio.h>
#include<math.h>

main(){
	int nota100, nota50, nota20, nota10, nota1, valor;
				
	printf("\nEntre com o valor:  ");
	scanf("%d", &valor);
	
	nota100 = valor%100;	
	printf("\nEntre com o valor eh %d: ", nota100);
	
	nota50 = nota100%50;
	printf("\nEntre com o valor eh %d: ", nota50);
		
	nota20 = nota50%20;
	printf("\nEntre com o valor eh %d: ", nota20);	
	
	nota20 = nota20%10;
	printf("\nEntre com o valor eh %d: ", nota10);	
	
	nota20 = nota10%1;
	printf("\nEntre com o valor eh %d: ", nota1);	
	
	
	

		
	
	
		
}


