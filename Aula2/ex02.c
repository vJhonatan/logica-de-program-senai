// Criar um algoritmo que some os 3 primeiros valores e subtraia o quarto valor.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, num3, num4, sub;

    printf("Insira o primeiro numero: ");
    scanf("%d" , &num1);

    printf("Insira o segundo numero: ");
    scanf("%d" , &num2);

    printf("Insira o terceiro numero: ");
    scanf("%d" , &num3);

    printf("Insira o quarto numero: ");
    scanf("%d" , &num4);

    sub = (num1+num2+num3) - num4;

    printf("\n(%d + %d + %d) - %d = %d \n", num1, num2, num3, num4, sub);

    return 0;
}