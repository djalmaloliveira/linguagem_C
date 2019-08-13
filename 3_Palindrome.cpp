/*
3. Faça uma função que receba uma string como parâmetro de entrada. Em seguida,
esta função deve verificar se a palavra é palíndroma ou não. Exemplos de palavras
palíndromas: aba, reviver, arara.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool EPalindrome(char sP[]){
	
	int it = strlen(sP);
	int pos; int cont;
	pos = it - 1;
	
	for(int x = 0;x<(it/2);x++){	
		
		if(sP[x]==sP[pos-x]) cont++;           
			
	}
	if (cont ==(it/2)) return true;
	
	return false;
	
};


main(){

	char sP[50] ;
	
	printf("\nAnalise da palavra se é Palimdrome");
	printf("\nDigite a palavra : ");
	gets(sP);
	
	
	if (EPalindrome(sP)) printf("\nA palavra eh Palindroma");
	else printf("A palavra nao eh Palindroma");
}

