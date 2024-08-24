// Faça um programa em C que permita entrar com o ano de nascimento da pessoa e
// com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça de
// verificar se o ano de nascimento informado é válido.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int dataNascimento;

    printf("Informe a data de nascimento: ");
    scanf("%d" , &dataNascimento);

    if (dataNascimento > 1900 && dataNascimento < 2024){
        printf("\n%d ano(s) de idade.\n" , 2024 - dataNascimento);
    } else {
        printf("\nInsira uma data de nascimento existente.\n");
    }

    return 0;

}