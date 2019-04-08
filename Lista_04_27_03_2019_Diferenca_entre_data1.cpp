/* 
Autor: Djalma - data: 30/03/2019 
4) Calcular a diferença em dias, meses e anos entre duas datas fornecidas 
no formato DD MM AAAA (DD = dia; MM = mês; AAAA = ano com quatro dígitos).
site:  https://thunderlightblue.wordpress.com/2015/04/14/como-calcular-o-ano-bissexto/
*/ 

#include<stdio.h>
#include<math.h>

main(){
	
	//Definindo as variaveis
	float valor;
	int dd1 = 0, mm1 = 0, aa1 = 0; 
	int dd2 = 0, mm2 = 0, aa2 = 0; 
	int rd1 = 0, rm1 = 0, ra1 = 0, rdias1; 
	int anozero = 1900;
	
	//Entrada das datas
	printf("\nCalculo de numero de dias entre datas ");
	printf("\n======== Informe a primeira data ========  ");	
	printf("\nDia_1:  ");
	scanf("%d", &dd1);
	printf("Mes_1:  ");
	scanf("%d", &mm1);
	printf("Ano_1 (AAAA):  ");
	scanf("%d", &aa1);
	printf("\n\n ");
	/*
	printf("\n======== Informe a segunda data ========  ");	
	printf("\nDia_2:  ");
	scanf("%d", &dd2);
	printf("Mes_2:  ");
	scanf("%d", &mm2);
	printf("Ano_2 (AAAA):  ");
	scanf("%d", &aa2);	
*/

	//Calculo para chegar a data 01/01/1900
	
	rd1 = dd1 - 01;
	rm1 = mm1 - 01;
	ra1 = aa1 - 1900;
	rdias1 = (rd1 + (rm1 * 30)+(ra1*365));

	printf("\nPrimeira data: %d/%d/%4d",dd1,mm1,aa1);			
	printf("\nNumero de dias enter a data citada e 01/01/01 eh:%d",rdias1);		
	
	
	
	
	//Bissexto
	for (anozero;anozero<aa1;anozero++){	
	
		int Bissexto = 0;
			printf("\nRelacao dos anos: %d",anozero);
		
		if (anozero % 400 == 0) { 
		
			Bissexto = 1;		
			
		}	
			float resultado1;
			resultado1 = anozero/400;
			printf("\nO de %d eh um ano %f",anozero, Bissexto) ;
			printf("\nDividindo o ano de %d por 400 resta %f",anozero, resultado1);
		
		
		/*
		else {
			if(aa1%4 == 0 && aa1%100!=0) Bissexto = 1;
		}*/
			
		  	
	}
	
	
		

}


