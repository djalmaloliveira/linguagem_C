/*
9. Fa�a uma fun��o que receba um vetor de 5 registros do tipo Pessoa e uma string,
representando um nome, como par�metro. Em seguida, a fun��o deve buscar o
nome da pessoa no vetor e retornar a sua idade. Se o nome da pessoa n�o existir
na lista, exibir uma mensagem para o usu�rio dizendo que n�o foi encontrar
nenhuma pessoa com este nome.
*/


#include <stdio.h>
#include <string.h>

#define itam 5

struct cadastro{
	char nome[50];
	int idade;
};

struct cadastro pessoa[itam];

int buscaIdade(struct cadastro p[50],char vt[50]){
	int iComp=1000;
	
	for(int i=0;i<itam;i++){
		
		iComp = strcmp(vt,p[i].nome);
		if(iComp==0)return p[i].idade;	
		
	}
	if (iComp !=0) return 0;
}

main ()
{
	char cNome[50]; int iIdade;
	
	printf("\nInforme o nome e dade das pessoas");
	for(int i=0;i<itam;i++){
		fflush(stdin);
		printf("\nNome: ");		
		gets(pessoa[i].nome);		
		printf("\nIdade: ");
		scanf("%d",&pessoa[i].idade);	
	}

	
  	printf("\n\nInforme um nome para buscar idade: ");
  	scanf("%s",&cNome);


	printf("\nNome procurado: %s ",cNome);
	
	iIdade = buscaIdade(pessoa,cNome);
	if(iIdade==0)printf("\n\nNome nao encontrado.!");
	  else printf("\nA idade eh : %d",iIdade);	
	
	
}
