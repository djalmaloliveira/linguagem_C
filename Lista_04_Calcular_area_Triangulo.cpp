/*
Autor: Djalma - data: 05/04/2019 
4) Fa�a uma programa que leia 3 valores A, B e C e verifique se esses valores representam os lados
de um tri�ngulo. Para que seja um tri�ngulo, todos os lados devem ser maiores que zero e nenhum
lado deve ser igual ou maior que a soma dos outros dois lados. Se A, B e C representam os lados de
um tri�ngulo, ent�o calcule e imprima sua �rea:
�rea = onde S = (a+b+c)/2
Informe tamb�m o tipo do tri�ngulo:
	� Escaleno: todos os lados diferentes.
	� Is�sceles: 2 lados iguais.
	� Equil�tero: todos os lados iguais.
*/	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



char calculaAreaTringulo(float A,float B,float C){
	
	float S = 0, area;
	S = (A+B+C)/2;
	area = sqrt(S*(S - A)*(S - B)*(S - C));
		
	printf("\nA area do triangulo eh: %.2f",area);
	
};

char defineTringulo(float A,float B,float C){
	
	if((A>0) && (B>0) && (C>0)) {
		printf("\nAs medidas sao de um triangulo");
		calculaAreaTringulo(A,B,C);
	}else{
		printf("\nAs medidas nao sao de um triangulo");
		//break;		
	}
	printf("\nLetra A: %.1f, Letra B: %.1f, Letra C: %.1f", A,B,C);

	
	if((A==B)&(B==C)) {	
		printf("\nEh um triangulo Equilatero");		
		}else{
		if((A==B)||(C==B)||(A==C)) printf("\nEh um triangulo Isosceles");
		}
		
	if((A!=B)&&(C!=B)&&(A!=C)) printf("\nEh um triangulo Escaleno");
	
	return 0;
}

main(){
	
	float ladoA,ladoB,ladoC;
	
	printf("Calcula a area do triangulo\n\n");
	printf("Informe o lado A: ");
	scanf("%f", &ladoA);

	printf("Informe o lado B: ");
	scanf("%f", &ladoB);
	
	printf("Informe o lado C: ");
	scanf("%f", &ladoC);
	
	defineTringulo(ladoA,ladoB,ladoC);
	
	printf("\n\n");

	return 0;

}

