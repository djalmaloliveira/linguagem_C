/*
1. Fa�a uma fun��o que receba um n�mero e calcule o fatorial deste 
n�mero. N�o esque�a de retornar o valor tamb�m.
*/
#include <stdio.h>
#include <stdlib.h>

int fatorial(int inum){
	
	int fat;	

	for(fat = 1; inum > 1; inum = inum - 1){
	    fat = fat * inum;
	}
	
	return fat;
	
};


main(){

	int ifat;
	printf("Insira um valor para o qual deseja calcular o fatorial: ");
	scanf("%d", &ifat);
	
	ifat = fatorial(ifat);
	printf("\nFatorial calculado: %d", ifat);
	return 0;

}

