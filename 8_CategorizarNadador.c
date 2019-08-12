/*
8. Faça um procedimento que recebe a idade de um nadador por
parâmetro e retorna a categoria desse nadador de acordo
com a tabela abaixo:

Idade Categoria
5 a 7 anos  Infantil    A
8 a 10 anos Infantil    B
11-13 anos  Juvenil     A
14-17 anos  Juvenil     B
Maiores de 18 anos (inclusive) Adulto
E e OU (&& e ||).
*/

#include<stdio.h>
#include<stdlib.h>

char CatNadador(int idade){

    int Cate  ;

    if ((idade >= 5)&&(idade <= 7))   Cate = "Infantil A";
    if ((idade >= 8)&&(idade <= 10))  Cate = "Infantil B";
    if ((idade >= 11)&&(idade <= 13)) Cate = "Juvenil A";
    if ((idade >= 14)&&(idade <= 17)) Cate = "Juvenil B";
    if (idade >= 18) Cate = "Adulto";
    return Cate;

}

int main()
{
    char cCat; int iIdade; int idade;

    printf("Informe a idade do nadador: ");
    //scanf("%d", &iIdade);

    iIdade = 19;

    cCat = CatNadador(iIdade);

    printf("Nadador cateria %s\n\n", cCat);
    system("pause");
}

