/*
1) Considerando o fluxograma abaixo, faça o que se pede:
O fluxograma pede uma quantidade de numeros, e no final
indica o maior numero informado e mostra a soma entre 
todos os numeros inseridos no sistema.

*/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int cont = 0,m = 0, s = 0, qtd, num;

	printf("Informe a quantidade: ");
	scanf("%d",&qtd);
	
	for(cont;cont < qtd;cont++){
		
		printf("Informe um numero: ");
		scanf("%d",&num);
		
		if (num > m){			
			m = num;
		}
		
		s = s + num;	
		
	}
	printf("");
	printf("O valor de m: %d\n", m);
	printf("O valor de s: %d", s);
	
	

	return 0;

}

