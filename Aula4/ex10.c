// Faça um programa em C que leia três números inteiros e imprima os três em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, num3;

    printf("Entre com um numero inteiro: ");
    scanf("%d" , &num1);

    printf("Entre com um numero inteiro: ");
    scanf("%d" , &num2);

    printf("Entre com um numero inteiro: ");
    scanf("%d" , &num3);

    if (num1 > num2 && num1 > num3 && num2 > num3) {
        printf("\n%d \n%d \n%d\n" , num3,num2,num1);
    }

    if (num1 > num2 && num1 > num3 && num2 < num3) {
        printf("\n%d \n%d \n%d\n" , num2,num3,num1);
    }

    if (num2 > num1 && num2 > num3 && num1 > num3) {
        printf("\n%d \n%d \n%d\n" , num3,num1,num2);
    }

    if (num2 > num1 && num2 > num3 && num1 < num3) {
        printf("\n%d \n%d \n%d\n" , num1,num3,num2);
    }

    if (num3 > num1 && num3 > num2 && num1 > num2) {
        printf("\n%d \n%d \n%d\n" , num2,num1,num3);
    }

    if (num3 > num1 && num3 > num2 && num2 > num1) {
        printf("\n%d \n%d \n%d\n" , num1,num2,num3);
    }


    return 0;

}