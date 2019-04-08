/* 
Autor: Djalma - data: 30/03/2019 
4) Calcular a diferença em dias, meses e anos entre duas datas fornecidas 
no formato DD MM AAAA (DD = dia; MM = mês; AAAA = ano com quatro dígitos).
site:  https://thunderlightblue.wordpress.com/2015/04/14/como-calcular-o-ano-bissexto/
*/ 

#include<stdio.h>

int calcbissexto(int aa1) {
	 
	int Bissexto = 0, anozero = 1900;
	for (anozero = 1900; anozero<aa1;anozero++){
		
		if ((anozero % 400) == 0) { 		
			Bissexto = Bissexto + 1;			
		}else{
			if((anozero%4 == 0) && (anozero%100!=0)) {
				Bissexto = Bissexto + 1;				
			}
		}
		
	}
	 return(Bissexto);	
}

main(){
	
	//Definindo as variaveis
	int dd1 = 0, mm1 = 0, aa1 = 0; 
	int dd2 = 0, mm2 = 0, aa2 = 0; 
	int ddt = 0, mmt = 0, aat = 0; 
	int rd1 = 0, rm1 = 0, ra1 = 0, rdias1; 
	int rd2 = 0, rm2 = 0, ra2 = 0, rdias2;
	int anobi1 = 0, anobi2 = 0,	diasbi = 0;
	
	//Entrada das datas
	printf("\nCalculo de numero de dias entre datas\n");
	printf("\n======== Informe a primeira data ========  ");	
	printf("\nDia_1:\t");
	scanf("%d", &dd1);
	printf("Mes_1:\t");
	scanf("%d", &mm1);
	printf("Ano_1(aaaa)");
	scanf("%d", &aa1);
	printf("\n ");

	printf("\n======== Informe a segunda data ========  ");	
	printf("\nDia_2:  ");
	scanf("%d", &dd2);
	printf("Mes_2:  ");
	scanf("%d", &mm2);
	printf("Ano_2(aaaa):");
	scanf("%d", &aa2);	
	
	//Corrigue possivel inversao de data
	if(aa2<aa1){
		printf("\nA data foi fornecida em ordem inversa, sera corrigida\n");		
		ddt = dd2; mmt = mm2; aat = aa2;		
		dd2 = dd1; mm2 = mm1; aa2 = aa1;
		dd1 = ddt; mm1 = mmt; aa1 = aat;
	}
		
	// Calculo das datas - subtrai do dia 01/01/1900.		
	rd1 = dd1 - 01;
	rm1 = mm1 - 01;
	ra1 = aa1 - 1900;
	rdias1 = (rd1 + (rm1 * 30)+(ra1*365));

	rd2 = dd2 - 01;
	rm2 = mm2 - 01;
	ra2 = aa2 - 1900;
	rdias2 = (rd2 + (rm2 * 30)+(ra2*365));

	//Calculo de ano Bissexto
	anobi1 = calcbissexto(aa1);	
	anobi2 = calcbissexto(aa2);
	diasbi = anobi2-anobi1;
	printf("\nA diferenca entre anos bisseosto eh: %d \n",(diasbi));

	//Data 1
	printf("\nPrimeira data: %d/%d/%4d",dd1,mm1,aa1);			
	printf("\nNumero de dias enter a data citada e 01/01/01 eh:%d\n",rdias1);		

	//Data 2
	printf("\nSegunda data: %d/%d/%4d",dd2,mm2,aa2);			
	printf("\nNumero de dias enter a data citada e 01/01/01 eh:%d\n",rdias2);		

	//Numero de dias entre as datas
	printf("\nNumero de dias enter as duas datas eh :%d dias",((rdias2-rdias1))+diasbi);		
	printf("\nNumero de anos enter as duas datas eh :%d anos\n",(((rdias2-rdias1)+diasbi)/365));

}



