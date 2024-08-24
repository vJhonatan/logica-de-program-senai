// Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o valor
// somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso
// o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.

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