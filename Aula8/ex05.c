// Desenvolva u programa que solicita 10 números ao usuário, através de
// um laço while, e ao final mostre os dois maiores números digitados pelo
// usuário.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num, contador=1, primeiroMaior, segundoMaior;

    while(contador <= 10){
        printf("\nDigite o %d numero: ",contador);
        scanf("%d",&num);

        if (num > primeiroMaior) {
            segundoMaior = primeiroMaior;
            primeiroMaior = num;
        } else if (num > segundoMaior) {
            segundoMaior = num;
        }

        contador++;
    }

    printf("%d e %d",primeiroMaior,segundoMaior);

    return 0;
}