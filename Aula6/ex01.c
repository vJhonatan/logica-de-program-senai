// Desenvolva um programa que leia um número e imprima na a tela e informe se o
// número é menor que 10, se o número é igual ao número 10 e se o número é
// maior que 10.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Insira um numero: ");
    scanf("%d" , &num);

    if (num < 10) {
        printf("\n%d eh menor que 10.\n", num);
    } else if (num == 10) {
        printf("\n%d eh igual a 10.\n",num);
    } else {
        printf("\n%d eh maior que 10.\n", num);
    }

    return 0;
}