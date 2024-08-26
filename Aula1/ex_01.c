// Desenvolva um programa em C que leia o saldo de uma conta poupança e imprima
// o novo saldo, considerando um reajuste de 2%.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float saldo,porcentagem,soma;

    printf("Insira seu saldo de poupanca: ");
    scanf("%f",&saldo);

    porcentagem = 0.02 * saldo;
    soma = saldo + porcentagem;

    printf("Seu novo saldo eh: %.2f", soma);

    return 0;
}

