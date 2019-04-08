#include<stdio.h>
#include<math.h>

int a, b, c, delta;
float Valor1, Valor2;

main(){
	printf("\nEntre com os valos de ´b´");
	
	printf("Calculo de Bascara\n");
	printf("\nEntre com os valos de ´a´");	
	scanf("%i", &a);	
	
	printf("\nEntre com os valos de ´b´");	
	scanf("%i", &b);	

	printf("\nEntre com os valos de ´c´");	
	scanf("%i", &c);	

	delta = (b*b-4*(c*a));
	
	printf("\nDelta ´d´ valor: %d",delta);
	
	Valor1 = 0;
	if (delta >0 ){
		Valor1 = ((-1*b)+sqrt(delta))/(2*a);
		printf("\nValor1 : %.2f",Valor1);
		
		Valor2 = ((-1*b)-sqrt(delta))/(2*a);
		printf("\nValor2 : %f.2",Valor2);
		
	}else{
		printf("\nNao tem valor definido");
	}
		
		
	
	
		
}


