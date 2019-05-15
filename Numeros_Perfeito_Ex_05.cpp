/*
5) Escreva um algoritmo que imprima todos os números perfeitos de 0 a 1000. Um número
se diz perfeito se é igual à soma de seus divisores próprios. Divisores próprios de um número
positivo N são todos os divisores inteiros positivos de N exceto o próprio N. 
Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é igual à 6.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
    int x, y, soma=0, qtd=0;
    
    for (x=0; x<=1000; x++)
    {
        soma = 0;
        for (y=1; y < x; y++)
        {
            if ((x%y)==0)
            soma = soma + y;
        }    
             if (x == soma){
             	qtd++;
             	printf("Numero perfeito: %d\n",soma);
			 }
             
             
    }
    printf ("\nEncontrato %d numeros perfeitos!!!\n\n\n", qtd);
    system ("pause");
}

