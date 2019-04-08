//Calcular raio e area de circunferencia

#include <stdio.h>
#include <stdlib.h>

main(){
	
	float valor1, raio, area,circunf;
	
	printf("Informe a circunferecia do circulo: \n");	
	scanf("%f", &circunf);
	raio = circunf/(2*3.1415);
	area = 3.1415*(raio*raio);
	printf("\n\nValor do raio eh %.2f e a area eh %.2f reais",raio,area);	

}


