/*
5) Escreva um algoritmo que imprima todos os n�meros perfeitos de 0 a 1000. Um n�mero
se diz perfeito se � igual � soma de seus divisores pr�prios. Divisores pr�prios de um n�mero
positivo N s�o todos os divisores inteiros positivos de N exceto o pr�prio N. 
Por exemplo, o n�mero 6, seus divisores pr�prios s�o 1, 2 e 3, cuja soma � igual � 6.
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

