/*
2) Leia 2 valores reais (x e y), que devem representar as coordenadas de um ponto em um
Plano. Cartesiano A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está
sobre um dos eixos cartesianos ou na origem (x = y = 0).
a) Se o ponto estiver na origem, escreva a mensagem “Origem”.
b) Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for
a situação.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int x,y;
	
	printf("Informe a coordenada x: ");
	scanf("%d",&x);
	printf("Informe a coordenada y: ");
	scanf("%d",&y);

	if( x==0 & y ==0)
		printf("Coordenada da Origema");
		
	if( x < 0 & y < 0)
		printf("Coordenada no quadrante 3");
		
	if( x < 0 & y > 0)
		printf("Coordenada no quadrante 2");
		
	if( x > 0 & y < 0)
		printf("Coordenada no quadrante 4");
		
	if( x > 0 & y > 0)
		printf("Coordenada no quadrante 1");
		
	
	




	return 0;

}

