//Calcular a distancia entre dois pontos

#include <stdio.h>
#include <stdlib.h>

main(){
	
	float x1,y1,x2,y2, distancia;
	
	printf("Calcula a distancia entre dois pontos \n\n");	
	
	printf("Informe o primeiro ponto x1: \n");	
	scanf("%f", &x1);

	printf("Informe o primeiro ponto y2: \n");	
	scanf("%f", &y1);	
	
	printf("Informe o primeiro ponto x2: \n");	
	scanf("%f", &x2);
	
	printf("Informe o primeiro ponto y1: \n");	
	scanf("%f", &y1);
	
	distancia = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
	
	printf("\n\nA distancia entre os pontos eh %.1f ",distancia);	

}


