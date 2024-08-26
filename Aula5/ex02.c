// Faça um programa que leia a idade de uma pessoa e informe:

// • Se é maior de idade
// • Se é menor de idade
// • Se é maior de 65 anos.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int idade;

    printf("Informe sua idade: ");
    scanf("%d" , &idade);

    if (idade >= 18 && idade < 65) {
        printf("\nMaior de idade.\n");
    }

    if (idade < 18) {
        printf("\nMenor de idade.\n");
    }

    if (idade > 65) {
        printf("\nIdoso.\n");
    }

    return 0;
}