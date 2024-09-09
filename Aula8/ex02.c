// Desenvolva um programa que permita ao usuário entrar com as notas de
// 4 bimestre de todos os alunos da sala, um por vez.
// Por fim, o programa deve mostrar a média, aritmética, do aluno e utilizar
// o While para continuar ou encerrar o programa.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador,quantidadeAlunos;
    float nota1, nota2, nota3, nota4, media;

    contador = 0;

    printf("Digite a quantidade de alunos tem na turma: ");
    scanf("%d",&quantidadeAlunos);

    system("cls");

    while (contador < quantidadeAlunos) {
        printf("ALUNO: \n\n");

        printf("Insira a nota do primeiro bimestre: ");
        scanf("%f",&nota1);

        printf("Insira a nota do segundo bimestre: ");
        scanf("%f",&nota2);

        printf("Insira a nota do terceiro bimestre: ");
        scanf("%f",&nota3);

        printf("Insira a nota do quarto bimestre: ");
        scanf("%f",&nota4);

        system("cls");

        media = (nota1+nota2+nota3+nota4) / 4;

        contador++;
    }

    printf("\nA media aritmetica da turma ficou: %.1f\n",media);

}