/*
Faça um algoritmo que leia um vetor de inteiros de 10
posições. Em seguida, no mesmo vetor, determine quantos
números par existem no vetor.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int x, valor, sala[10],par=0;
	
	printf("\n\nTrabalhando com vetores\n\n");
	for(x=1;x<11;x++){
		
		printf("\n%d-Informe um numero: ",x);
		scanf("%d",&valor);
		sala[x]=valor;
				
		if(valor%2==0 || valor == 0 )	par++;

	}
	printf("\n\nExistem %d numeros pares no vetor.",par);
	
	return 0;

}

