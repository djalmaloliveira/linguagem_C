/* Djalma - 15/05
4) Em uma eleição presidencial, existem dois candidatos. Os votos são informados através
de um número:
• 1 e 2 representa o voto para os respectivos candidatos A e B respectivamente.
• 0 representa o voto em branco.
• Qualquer outro número diferente representa um voto nulo.
Elabore um algoritmo que leia votos de 10 pessoas, calcule e escreva:
a) Total e o percentual de votos de cada candidato.
b) Total e o percentual de votos em branco e nulos.
c) O candidato vencedor (com maior número de votos), em que se deve imprimir o nome
do candidato vencedor (A ou B) e o percentual e quantidade de votos.
*/
#include <stdio.h>
#include <stdlib.h>

main(){

	int x,y,A=0,B=0,branco=0;
	float ra=0,rb=0,rbranco=0;

	printf("###     Eleicao Presidencial      ###\n");
	printf("###     ___________________       ###\n");
	printf("###     Caditado A numero = 1     ###\n");
	printf("###     Caditado B numero = 2     ###\n\n\n");

	for (x=0;x<10;x++){
		
		printf("\n%d-Informe o seu voto 1 ou 2 ? ",x+1);
		scanf("%d",&y);

		if(y == 0) branco++;
		if(y == 1) A++;
		if(y == 2) B++;		
		
	}
	
	rbranco = (branco*100)/x;
	ra = (A*100)/x;
	rb = (B*100)/x;
	
	printf("\n\n####    Resultado da votacao     ####\n\n");
	printf(" Total de votos %d\n",x);
	printf(" Votos em branco: %d percentual de %.0f%%\n",branco, rbranco);
	printf(" Votos no candidato A: %d percentual de %.0f%%\n",A, ra);
	printf(" Votos no candidato B: %d percentual de %.0f%%\n",B, rb);
	
	printf("\n\n");
	return 0;

}

