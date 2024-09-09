// Desenvolva um programa que recebe números inteiro e mostra os números
// pares e ímpares (separados, em duas colunas), de 1 até esse inteiro.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador,number;

    printf("Digite um numero: ");
    scanf("%d",&number);

    contador = 1;

    while (contador <= number) {
        printf("\n%d - %d \n",contador,contador+1);
        contador=contador+2;
    }

    return 0;

}