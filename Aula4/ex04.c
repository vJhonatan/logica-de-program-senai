// Faça um programa que leia um número e informe se ele é ou não divisível por 5.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Entre com um numero: ");
    scanf("%d" , &num);

    if (num % 5 == 0) {
        printf("\nEh divisivel por 5\n");
    } else {
        printf("\nNao eh divisivel por 5\n");
    }

    return 0;
}