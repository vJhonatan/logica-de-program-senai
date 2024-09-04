// 9. Desenvolva um programa que pergunta um número ao usuário, e mostra
// sua tabuada completa (de 1 até 10)

#include <stdio.h>
#include <stdlib.h>

int main () {

    int number,contador;

    contador = 1;

    printf("Escolha um numero para ver a tabuada: ");
    scanf("%d",&number);

    while(contador <= 10) {
        printf("\n%d x %d = %d \n",number,contador,contador*number);
        contador++;
    }

    return 0;
}