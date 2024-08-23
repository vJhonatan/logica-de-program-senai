// Desenvolve um programa que permita entrar com 2 valores, mostrar na tela simultaneamente os resultados da:

// Soma dos 2 números.
// Multiplicação dos 2 números.
// Divisão entre os 2 números.
// Subtração entre os 2 números.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, soma, multi, div, sub;

    printf("Insira o primeiro numero: ");
    scanf("%d" , &num1);

    printf("Insira o segundo numero: ");
    scanf("%d" , &num2);

    soma = num1+num2;
    multi = num1*num2;
    div = num1 / num2;
    sub = num1 - num2;

    system("cls");

    printf("\n%d + %d = %d\n", num1, num2, soma);
    printf("\n%d x %d = %d\n", num1, num2, multi);
    printf("\n%d / %d = %d\n", num1, num2, div);
    printf("\n%d - %d = %d\n", num1, num2, sub);

    return 0;
}