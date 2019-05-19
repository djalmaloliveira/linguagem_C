/*
Exemplo trabalhando com vetor
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	int x, sala[10];
	
	printf("\n\nTrabalhando com Vetores\n\n");
	
	for (x=0;x<10;x++){
		sala[x]=x;		
		printf("\nNa posicao %d tem o valor %d",x, sala[x]);		
	}

	return 0;

}

