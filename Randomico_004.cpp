#include<stdio.h>
#include<conio.h>
int main (void )
{
  int matriz[4][6],i, j;
  
  printf ("\nDigite valor para os elementos da matriz\n");

  for ( i=0; i<4; i++ )
    for ( j=0; j<6; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      //scanf ("%d", &matriz[ i ][ j ]);
      matriz[i][j]=i+j;
    }
    
  printf("\n\n******************* Saida de Dados ********************* \n\n");
  
  for ( i=0; i<4; i++ )
    for ( j=0; j<6; j++ )
    {
      printf ("\nElemento[%d][%d] = %d", i, j,matriz[ i ][ j ]);
    }
   printf("\n\n ****************** Tabuleiro ********************* \n\n");  
  
  ////
  for ( i=0; i<4; i++ )
    {
  		    
		printf("\n| %d | %d | %d | %d | %d |  \n\n",matriz[ i ][ i + 0 ],matriz[ i ][ i + 1 ],matriz[ i ][ i + 2 ],matriz[ i ][ i + 3 ],matriz[ i ][ i + 4 ],matriz[ i ][ i + 5 ]);   
		
  	}

 /////
 

  getch();
  return(0);
}
