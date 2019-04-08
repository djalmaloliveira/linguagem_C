/*
Calculo de Pintura de Cilindro
Autor: Djalma
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	
	float raio,circunferencia,altura,area, latas, preco;
	
	printf("Informe o Raio do cilindro: \n");
	scanf("%f",&raio);
	
	printf("Informe a altura do cilindro: \n");
	scanf("%f",&altura);
	
	area = (2 * 3.1416 * raio * altura) + (3.1416 * (raio*raio));	
	latas = ceil(area/(5*3));
	preco = latas * 50;	
	
	printf("\nA area do cilindro eh %.2f metros quadrado\n",area);
	printf("\nSera necessario %.0f latas de tintas\n",latas);
	printf("\nO valor final sera de: %.2f reais\n",preco);
	
	return 0;
	
}

