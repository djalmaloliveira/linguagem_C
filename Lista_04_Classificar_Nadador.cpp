/*
Autor: Djalma - data: 04/04/2019 
3) Elabore um programa que recebe a idade de um nadador. O programa deve classificar o nadador
em uma das categorias abaixo:
a) Infantil A= de 5 a 7 anos
b) Infantil B= de 8 a 10 anos
c) Juvenil A= de 11 a 13 anos
d) Juvenil B= de 14 a 17 anos
e) Sênior = maiores de 18 anos
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int idade;
	
	printf("Classifica nadador por categoria\n\n");
	printf("Qual a idade do nadador:\n");
	scanf("%d", &idade);
	

		//&&  (idade < 7)
	   if((idade>5) &&  (idade < 7) ){
	   	 //a) Infantil A= de 5 a 7 anos
	     printf("\n\nPela idade fornecida ele eh: Infantil A");	   
		}
		if ( (idade > 8) &&  (idade < 10)){
		 	//b) Infantil B= de 8 a 10 anos
		     printf("\n\nPela idade fornecida ele eh: Infantil B");		   		
		}
		   		
		if ( (idade > 11) &&  (idade < 13)){
		   	 //c) Juvenil A= de 11 a 13 anos
		     printf("\n\nPela idade fornecida ele eh: Juvenil A");		   		
		}
		if ( (idade > 14) &&  (idade < 17)){
		   	 //d) Juvenil B= de 14 a 17 anos
		     printf("\n\nPela idade fornecida ele eh: Juvenil B");		   	 
		}
		if (idade > 18){			
		   	 //e) Sênior = maiores de 18 anos
		     printf("\n\nPela idade fornecida ele eh: Senior");		   			
		}
	
	return 0;

}

