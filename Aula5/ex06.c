// Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês
// correspondente. Caso o usuário digite um número fora desse intervalo, deverá
// aparecer uma mensagem informando que não existe mês com este número.
// Utilize o switch para este problema.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Digite um numero de 1 a 12 pra descobrir o mes correspondente: ");
    scanf("%d",&num);

    if(num == 1) {
        printf("\nJaneiro\n");
    } else if (num == 2) {
        printf("\nFevereiro\n");
    } else if (num == 3) {
        printf("\nMarco\n");
    } else if (num == 4) {
        printf("\nAbril\n");
    } else if (num == 5) {
        printf("\nMaio\n");
    } else if (num == 6) {
        printf("\nJunho\n");
    } else if (num == 7) {
        printf("\nJulho\n");
    } else if (num == 8) {
        printf("\nAgosto\n");
    } else if (num == 9) {
        printf("\nSetembro\n");
    } else if (num == 10) {
        printf("\nOutubro\n");
    } else if (num == 11) {
        printf("\nNovembro\n");
    } else if (num == 12) {
        printf("\nDezembro\n");
    } else {
        printf("\nErro! Digite um numero de 1 a 12.\n");
    }

    return 0;
}