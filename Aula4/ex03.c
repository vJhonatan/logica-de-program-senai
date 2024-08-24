// Faça um programa que leia um número e imprima uma das duas mensagens: "É
// múltiplo de 3"ou "Não é múltiplo de 3".

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Entre com um numero: ");
    scanf("%d" , &num);

    if (num % 3 == 0) {
        printf("\nEh multiplo de 3\n");
    } else {
        printf("\nNao eh multiplo de 3\n");
    }

    return 0;
}