#include <stdio.h>
#include <string.h> //necessário para strcpy
#include <conio.h>
int main (void)
{
  char cnome;
  char nome[5][10] = { "Joao", "Maria", "Jose","Tadeu","Tobias" };
  char idade[5][10] = { "23", "45", "51", "43", "12" };
  
  printf("Escolha um dos nomes da lista\n\n");
  
  for(int i=0;i<4;i++){
  	printf("\nNome: %s",nome[i]);
  }
  printf("\nInforme um nome: ");
  scanf("%s",cnome);
  for(int y=0;y<4;y++){
  	if(cnome==nome[y]){
  		printf("\n1-Nome = %s e idade = %s",nome[y],idade[y] );
	  }
  	  else
  	printf("\nNome nao encontrado");
  }
  
  
  printf("\n2-Nome = %s e idade = %s",nome[1],idade[1] );
  
  getch();
  return 0;
}
