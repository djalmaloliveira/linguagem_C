//Calcular Media ponderada

#include <stdio.h>

main(){
	
	float prova1, prova2, mediap;
	
	printf("Calcular a media ponderada \n\n");	
	
	printf("Informe a primeira nota: \n");	
	scanf("%f", &prova1);
	
	printf("Informe a segunda nota: \n");	
	scanf("%f", &prova2);
	
	mediap = (prova1*2 + prova2*3)/5;
	printf("\n\nA media ponderada eh %.1f ",mediap);	

}


