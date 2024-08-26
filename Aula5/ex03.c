// Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota
// da prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova
// 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado",
// "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3
// para reprovação e as demais em prova final).

#include <stdio.h>
#include <stdlib.h>

int main () {

    float nota1, nota2, media;
    char nome[20];

    printf("Informe o nome do aluno: ");
    scanf("%s" , &nome);

    printf("\nInforme a nota da prova 1: ");
    scanf("%f" , &nota1);

    printf("\nInforme a nota da prova 2: ");
    scanf("%f" , &nota2);

    system("cls");

    media = (nota1 + nota2) / 2;

    if (media >= 7) {
        printf("Nome do aluno: %s \nNota da prova 1: %.1f \nNota da prova 2: %.1f \nMedia: %.1f \n\nAprovado!\n", nome, nota1, nota2, media);
    } else if (media < 3) {
        printf("Nome do aluno: %s \nNota da prova 1: %.1f \nNota da prova 2: %.1f \nMedia: %.1f \n\nReprovado.\n", nome, nota1, nota2, media);
    } else {
        printf("Nome do aluno: %s \nNota da prova 1: %.1f \nNota da prova 2: %.1f \nMedia: %.1f \n\nRecuperacao.\n", nome, nota1, nota2, media);
    }

    return 0;
}