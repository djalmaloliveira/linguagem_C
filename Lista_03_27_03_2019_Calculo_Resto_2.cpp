/* 
Autor: Djalma - data: 27/03/2019 
3) Faça um programa que receba um valor em R$ (inteiro). Em seguida, calcule em 
quantas notas de 100, 50, 20, 10, 5, 2 e 1 o valor pode ser dividido, 
utilizando o menor número possível de notas. Por exemplo, para a entrada de R$ 357, 
imprima o resultado no seguinte formato:
*/ 

#include<stdio.h>
#include<math.h>

main(){
	
	//Definindo as variaveis
	float valor;
	int i100 = 0, i50 = 0, i20 = 0, i10 = 0, i2 = 0;				
	
	//Entrada de dados
	printf("\nEntre com o valor:  ");
	scanf("%f", &valor);
	

	//Resolvendo para 100,00
	//Somente se o valor for Maior que 100 vai entrar nessa condicao
	if (valor > 100){  
		for (i100;i100<100;i100++){					
			if (valor<100)break;
			valor = valor - 100;								
		}			
	}		
	//Somante sera mostrado esta linha quando a quantidade de notas fora mairo que zero
	if (i100>0){	
	printf("\nApos retirar %d notas de 100, ainda resta: %.2f reais", i100, valor);
	}
	
	
	//A seguir tudo é repeticao mudando apenas o valor da nota
	// 50 reaias
	if (valor > 50){		
		for (i50;i50<50;i50++){					
			if (valor<50)break;
			valor = valor - 50;								
		}			
	}		
	if (i50>0)
	printf("\nApos retirar %d notas de 50, ainda resta: %.2f reais", i50, valor);



	// 20 reaias
	if (valor > 20){		
		for (i20;i20<50;i20++){					
			if (valor<20)break;
			valor = valor - 20;								
		}			
	}	
	if (i20>0)	
	printf("\nApos retirar %d notas de 20, ainda resta: %.2f reais", i20, valor);



	// 10 reaias
	if (valor > 10){		
		for (i10;i10<50;i10++){					
			if (valor<10)break;
			valor = valor - 10;								
		}			
	}	
	if (i10>0)	
	printf("\nApos retirar %d notas de 10, ainda resta: %.2f reais", i10, valor);
	


	// 5 reaias
	if (valor > 5){		
		for (i10;i10<50;i10++){					
			if (valor<5)break;
			valor = valor - 5;								
		}			
	}	
	if (i10>0)	
	printf("\nApos retirar %d notas de 5, ainda resta: %.2f reais", i10, valor);
		
	

	// 2 reaias
	if (valor > 2){		
	for (i2;i2<50;i2++){					
		if (valor<2)break;
		valor = valor - 2;								
		}			
	}
	if (i2>0)	
	printf("\nApos retirar %d notas de 2, ainda resta: %.2f reais", i2, valor);

}


