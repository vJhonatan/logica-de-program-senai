// Desenvolva um programa que receba um número e mostre uma mensagem caso
// este número seja maior que 10.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if (num > 10) {
        printf("\nNumero maior que 10 \n");
    }

    return 0;
}