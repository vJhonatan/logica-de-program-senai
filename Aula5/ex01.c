// Faça um programa que leia 3 números e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1,num2,num3;

    printf("Insira um numero inteiro: ");
    scanf("%d" , &num1);

    printf("Insira um numero inteiro: ");
    scanf("%d" , &num2);

    printf("Insira um numero inteiro: ");
    scanf("%d" , &num3);

    if (num1 > num2 && num1 > num3) {
        printf("\n%d\n" , num1);
    }

    if (num2 > num1 && num2 > num3) {
        printf("\n%d\n" , num2);
    }

    if (num3 > num2 && num1 < num3) {
        printf("\n%d\n" , num3);
    }

    return 0;
}