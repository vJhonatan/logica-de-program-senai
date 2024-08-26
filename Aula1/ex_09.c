// Desenvolva um programa em C que leia 10 valores numéricos inteiros e faça.
// • A adição entre os valores digitados
// • Subtração dos 5 últimos valores digitados
// • Soma de todos os 9 primeiros valores e a divisão pelo último valor de
// entrada.
// • Soma de todos os 9 primeiros valores e a multiplicação pelo último valor
// de entrada.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    float soma, sub, somaDivisao, somaMultiplicacao;

    printf("1- Entre com um numero: ");
    scanf("%d" , &num1);

    printf("2- Entre com um numero: ");
    scanf("%d" , &num2);

    printf("3- Entre com um numero: ");
    scanf("%d" , &num3);

    printf("4- Entre com um numero: ");
    scanf("%d" , &num4);

    printf("5- Entre com um numero: ");
    scanf("%d" , &num5);

    printf("6- Entre com um numero: ");
    scanf("%d" , &num6);

    printf("7- Entre com um numero: ");
    scanf("%d" , &num7);

    printf("8- Entre com um numero: ");
    scanf("%d" , &num8);

    printf("9- Entre com um numero: ");
    scanf("%d" , &num9);

    printf("10- Entre com um numero: ");
    scanf("%d" , &num10);

    soma = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    sub = num6-num7-num8-num9-num10;
    somaDivisao = (num1+num2+num3+num4+num5+num6+num7+num8+num9) / num10;
    somaMultiplicacao = (num1+num2+num3+num4+num5+num6+num7+num8+num9) * num10;

    printf("\n\nA adicao entre os valores digitados: %.f \n\nSubtracao dos 5 ultimos valores digitados: %.f \n\nSoma de todos os 9 primeiros valores e a divisao pelo ultimo valor de entrada: %.f \n\nSoma de todos os 9 primeiros valores e a multiplicacao pelo ultimo valor de entrada: %.f \n\n",soma, sub, somaDivisao, somaMultiplicacao);

    return 0;
}