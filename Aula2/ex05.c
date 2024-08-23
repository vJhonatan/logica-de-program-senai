// Desenvolve um programa que permita entrar com 3 valores, fazer a soma dos 2
// primeiros números e subtrair pelo terceiro, informar o resultado final.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, num3, sub;

    printf("Insira o primeiro numero: ");
    scanf("%d" , &num1);

    printf("Insira o segundo numero: ");
    scanf("%d" , &num2);

    printf("Insira o terceiro numero: ");
    scanf("%d" , &num3);

    sub = (num1+num2) - num3;

    system("cls");

    printf("\n(%d + %d) - %d = %d\n", num1, num2, num3, sub);

    return 0;
}