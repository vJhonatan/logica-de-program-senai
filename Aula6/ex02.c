// Desenvolva um programa que leia 3 notas de um determinado aluno e mostre na
// tela o seguinte:
// Se a média for menor que 4 (Aluno Reprovado)
// Se a média for maior ou igual a 4 e menor que 7 (Aluno ficou em
// Recuperação)
// Se a média for maior ou igual a 7 (Aluno Aprovado)

#include <stdio.h>
#include <stdlib.h>

int main () {

    float nota1, nota2, nota3, media;

    printf("Insira a primeira nota: ");
    scanf("%f",&nota1);

    printf("\nInsira a segunda nota: ");
    scanf("%f",&nota2);

    printf("\nInsira a terceira nota: ");
    scanf("%f",&nota3);

    media = (nota1+nota2+nota3) / 3;

    if (media < 4) {
        printf("\nAluno Reprovado.\n");
    } else if (media >= 4 && media < 7) {
        printf("\nAluno em Recuperacao.\n");
    } else {
        printf("\nAluno Aprovado.\n");
    }

    return 0;
}