/*
	Name: Soma de n�meros inteiros
	Author: Pedro Pereira Guaita
	Date: 19/03/25 
	Description: Soma entre os n�meros de 1 a 10 usando la�o de repeti��o
*/

#include <stdio.h>

int main()
{
    int i, soma = 0;
    
    for(i = 0; i < 11; i++)
    {
        soma += i;
    }
    
    printf("A soma dos m�mero entre 1 e 10 �: %d", soma);
}

