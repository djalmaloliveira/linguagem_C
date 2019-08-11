/*
6. Faça uma função que recebe a idade de uma pessoa em anos,
meses e dias e retorna essa idade expressa em dias.

*/

#include<stdio.h>
#include<libio.h>

int CalculaDias(int iAno, int iMes, int intDias){
    int iTotalDias;

    iTotalDias = intDias + (iMes * 30) + ((iAno-1) * 365 );

    return iTotalDias;

}

main(){

    int iTdias;
    int ianos, imeses, idias;

    printf("Calculo da idade da pessoa em dias");
    printf("\nFavor informar o ano do seu nascimento: ");
    scanf("%d",&ianos);
    printf("\nFavor informar o mes do seu nascimento: ");
    scanf("%d",&imeses);
    printf("\nFavor informar o dia do seu nascimento: ");
    scanf("%d",&idias);

    iTdias = CalculaDias(ianos,imeses,idias);


    printf("\n\nO tempo total em dias eh : %d",iTdias);


}
