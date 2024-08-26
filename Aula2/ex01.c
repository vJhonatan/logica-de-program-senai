
// Desenvolver um programa que permita a entrada de 5 valores positivos, calcular qual é o valor referente a 10% do valor total da soma, 
// mostre o resultado da soma e o valor do percentual informado.

#include <stdio.h>
#include <stdlib.h>

int main () {



    int num1, num2, num3, num4, num5, soma, calculo;

    printf("Insira o primeiro numero: ");
    scanf("%d" , &num1);

    printf("Insira o segundo numero: ");
    scanf("%d" , &num2);

    printf("Insira o terceiro numero: ");
    scanf("%d" , &num3);

    printf("Insira o quarto numero: ");
    scanf("%d" , &num4);

    printf("Insira o quinto numero: ");
    scanf("%d" , &num5);

    soma = num1+num2+num3+num4+num5;

    calculo = soma * 0.1;

    printf("\nA soma de todos os numeros deu: %d \n\n10%% de %d eh: %d \n", soma, soma, calculo);

    return 0;

}