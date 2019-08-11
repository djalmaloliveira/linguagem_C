/*
5. Faça uma função que recebe por parâmetro o tempo de duração de
uma fábrica expressa em segundos e retorna também por parâmetro
esse tempo em horas, minutos e segundos.

*/

#include<stdio.h>
#include<libio.h>

struct Tempos{
    int iH;
    int iM;
    int iS;
}Tempo;

void CalculoDuracao(int iTimeT){

    int iHora; float fMinu, fSeg;

    iHora = iTimeT/3600;
    Tempo.iH = iHora;
    Tempo.iM = (iTimeT%3600)/60;
    Tempo.iS = (iTimeT%3600)%60;
}

main(){

    int iTempo;

    printf("Calculo de horas trabalhadas a partir do tempo em segundos");
    printf("Favor informar quantos seguindos: ");
    scanf("%d",&iTempo);

    CalculoDuracao(iTempo);


    printf("\n\nO tempo total em horas eh : %d:%d:%d",Tempo.iH,Tempo.iM,Tempo.iS);


}
