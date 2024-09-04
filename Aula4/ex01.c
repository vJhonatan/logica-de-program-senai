// Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.

#include <stdio.h>
#include <stdlib.h>


int main () {

    int num1, num2, soma;

    printf("Entre com um numero: ");
    scanf("%d" , &num1);

    printf("\nEntre com outro numero: ");
    scanf("%d" , &num2);

    soma = num1 + num2;

    if (soma > 20) {
        printf("\n%d\n",soma+8);
    } else {
        printf("\n%d\n",soma-5);
    }

    return 0;
}