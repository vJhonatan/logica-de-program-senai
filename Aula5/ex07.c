// Em um campeonato nacional de arco-e-flecha, tem-se equipes de três
// jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não
// obtiveram o mesmo número de pontos, criar um programa em C que informe
// se uma equipe foi classificada, de acordo com a seguinte especificação:


// • Ler os pontos obtidos por cada jogador da equipe;
// • Mostrar esses valores em ordem decrescente;
// • Se a soma dos pontos for maior do que 100, imprimir a média aritmética

// entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, num3, soma;
    float media;

    printf("Informe a pontuacao do primeiro arqueiro: ");
    scanf("%d" , &num1);

    printf("Informe a pontuacao do segundo arqueiro: ");
    scanf("%d" , &num2);

    printf("Informe a pontuacao do terceiro arqueiro: ");
    scanf("%d" , &num3);

    if (num1 > num2 && num1 > num3 && num2 > num3) {
        printf("\nJogador 1: %d \nJogador 2: %d \nJogador 3: %d\n\n" , num1,num2,num3);
    }

    if (num1 > num2 && num1 > num3 && num2 < num3) {
        printf("\nJogador 1: %d \nJogador 3: %d \nJogador 2: %d\n\n" , num1,num3,num2);
    }

    if (num2 > num1 && num2 > num3 && num1 > num3) {
        printf("\nJogador 2: %d \nJogador 1: %d \nJogador 3: %d\n\n" , num2,num1,num3);
    }

    if (num2 > num1 && num2 > num3 && num1 < num3) {
        printf("\nJogador 2: %d \nJogador 3: %d \nJogador 1: %d\n\n" , num2,num3,num1);
    }

    if (num3 > num1 && num3 > num2 && num1 > num2) {
        printf("\nJogador 3: %d \nJogador 1: %d \nJogador 2: %d\n\n" , num3,num1,num2);
    }

    if (num3 > num1 && num3 > num2 && num2 > num1) {
        printf("\nJogador 3: %d \nJogador 2: %d \nJogador 1: %d\n\n" , num3,num2,num1);
    }

    soma = num1+num2+num3;
    media = soma / 3;

    if(soma > 100) {
        printf("Media Pontuacao: %.2f\n", media);
    } else {
        printf("Equipe desclassificada.");
    }

    return 0;
}