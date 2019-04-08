    //Exemplo de programa em C
    //Par ou impar.
    #include <stdio.h>
    #include <conio.h>
    int main(void)
    {
      int n1,n2,resto;
      
      printf ("\nDigite um numero_1:");
      scanf ("%d", &n1);
      
      printf ("\nDigite um numero_2:");
      scanf ("%d", &n2);
      
      resto = n1 % n2;
      printf ("O resto da divisao de %d  por %d eh %d",n1, n2,resto);
      
      if (resto == 0)
        printf("\nO numero %d e par. \n",n1);
      else
        printf("\nO numero %d e impar. \n",n1);
      
      getch();
      return(0);
    }
