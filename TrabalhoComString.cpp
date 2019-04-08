/*
Programa que trabalha com String e funcoes
*/
#include <stdio.h>
#include <stdlib.h>


int multiplica(int n11, int n22){
	int valor;
	valor = n11*n22;
	return(valor);
}

char concatenar(char str11, char str22){
	char strfinal;
	strfinal = str11 + str22;
	return(strfinal);
}

main(){
	
	int n1, n2, valor;
	char str1, str2;
	
	printf("Informe o n1: \n");
	scanf("%d",&n1);
	
	printf("Informe o n2: \n");
	scanf("%d",&n2);
	
	printf("Resultado da multiplicacao %d: \n",multiplica(n1,n2));
		
	printf("Concatenar a String str1 e str2: %c \n",concatenar("String1","String2"));

}


