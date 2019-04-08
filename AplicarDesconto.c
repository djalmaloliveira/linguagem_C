//Aplicar desconto sobre o produto

#include <stdio.h>

main(){
	
	float valor1, resultado;
	
	printf("Informe o do produto: \n");	
	scanf("%f", &valor1);
	resultado = valor1*.85;
	printf("\n\nValor com desconto: %.2f reais",resultado);	

}


