/*
Programa que trabalha com Triangulos
Trabalho de sala de aula

Condi��o b�sica para ser um tri�ngulo:
(A < B + C)E(B < A + C)E(C < A + B)
Equil�tero: (A = B)E(B = C)
Is�sceles: (A = B)OU(A = C)OU(B = C)
Escaleno: (A <> B)E(B <> C)E(A <> C)
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	
	int ladoA,ladoB,ladoC;
	
	printf("Determinar o tipo de triangulo \n\n");	
	printf("Informe o lado A do triangulo: \n");
	scanf("%i",&ladoA);
	printf("Informe o lado B do triangulo: \n");
	scanf("%i",&ladoB);
	printf("Informe o lado C do triangulo: \n");
	scanf("%i",&ladoC);

	//Condi��o b�sica para ser um tri�ngulo:
	//(A < B + C)E(B < A + C)E(C < A + B)
	if((ladoA<(ladoB+ladoC)) && (ladoB<(ladoA+ladoC)) && (ladoC<(ladoA+ladoB))){
				
		//Equil�tero: (A = B)E(B = C)
		if ((ladoA == ladoB)&&(ladoB==ladoC)){
			printf("E um triangulo Equilatero\n");		
		};
		//Is�sceles: (A = B)OU(A = C)OU(B = C)
		if((ladoA==ladoB)||(ladoA==ladoC)||(ladoB==ladoC)){			
			printf("E um triangulo Isoceles\n");		
		};
		//Escaleno: (A <> B)E(B <> C)E(A <> C)
		if((ladoA!=ladoB)&&(ladoB!=ladoC)&&(ladoA!=ladoC)){
			printf("E um triangulo Escaleno\n");		
		}else{
			printf("Isso nao eh um triangulo\n");
		}

	}







	return 0;

}

