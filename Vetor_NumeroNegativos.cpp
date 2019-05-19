/*
Faça um algoritmo que leia um vetor de números inteiros
positivos e negativos de 10 posições. Em seguida, no mesmo
vetor, substitua todos os números negativos pelo seu valor
positivo.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int x, sala1[10],sala2[10], valor;
	
	printf("Trabalhando com vetores\n\n");
	
	for (x=0;x<10;x++){
		
		printf("%d-Informe um numero: ",x);
		scanf("%d",&valor);
		sala1[x]=valor;
		
		if(valor<0){
			valor = valor * -1;			
		}
		sala2[x]=valor;		
	}
	printf("\n\n");
	for (x=0;x<10;x++){
		
		printf("\n%d Valor do item eh: %d",x,sala2[x]);
		
	}




	return 0;

}

