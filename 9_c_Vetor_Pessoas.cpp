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
