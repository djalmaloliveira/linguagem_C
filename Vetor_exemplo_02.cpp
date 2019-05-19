/*
Faça um algoritmo que preencha um vetor 
com números pares de 0 a 10.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	int x, sala[10];
	
	printf("\n\nTrabalhando com Vetores\n\n");
	
	for (x=0;x<11;x++){
		
		if(x%2==0){
			
			sala[x]=x;		
			printf("\nNa posicao %d tem o valor %d",x, sala[x]);
		}
		
			
				
	}

	return 0;

}

