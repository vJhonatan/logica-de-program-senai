// Faça um programa em C que leia um número e informe se ele é divisível por 3 e por 7.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Entre com um numero: ");
    scanf("%d" , &num);

    if (num % 3 == 0 && num % 7 == 0) {
        printf("\nEh divisivel por 3 e 7\n");
    } else {
        printf("\nNao eh divisivel por 3 e 7\n");
    }

    return 0;
}

