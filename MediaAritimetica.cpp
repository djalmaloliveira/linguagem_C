//Media aritimetica entre 3 notas

#include<stdio.h>
#include<stdlib.h>

main(){
	
	float nota1,nota2,nota3, media;
	
	printf("\nCalcula media arimetrica.\n\n\n");

	printf("\nNota1: ");	
	scanf("%f", &nota1);
	
	printf("\nNota2: ");	
	scanf("%f", &nota2);
	
	printf("\nNota3: ");	
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	printf("\nMedia final do aluno:%.1f ",media);
	
	printf("\n\n\n");
	
	system("pause");
		
}
