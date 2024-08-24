// Faça um programa que leia um número e imprima uma das mensagens: "Maior do
// que 20", "Igual a 20"ou "Menor do que 20".

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, soma;

    printf("Entre com um numero: ");
    scanf("%d" , &num1);

    printf("\nEntre com outro numero: ");
    scanf("%d" , &num2);

    soma = num1 + num2;

    if (soma > 10) {
        printf("\n%d\n",soma);
    }

    return 0;
}