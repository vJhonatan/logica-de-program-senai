// Desenvolve um programa que permita entrar com 3 valores, somar os 3 valores e informar o resultado.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, num3, soma;

    printf("Insira o primeiro numero: ");
    scanf("%d" , &num1);

    printf("Insira o segundo numero: ");
    scanf("%d" , &num2);

    printf("Insira o terceiro numero: ");
    scanf("%d" , &num3);

    soma = num1+num2+num3;

    system("cls");

    printf("\n%d + %d + %d = %d\n", num1, num2, num3, soma);

    return 0;
}