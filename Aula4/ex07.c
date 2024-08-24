// Faça um programa em C que leia um número e indique se o número está
// compreendido entre 20 e 50 ou não.

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