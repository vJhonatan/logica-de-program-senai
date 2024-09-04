// 8. Desenvolva um programa em C que recebe inteiro e mostra os números
// pares e ímpares (separados, em duas colunas), de 1 até esse inteiro

#include <stdio.h>
#include <stdlib.h>

int main () {


    int contador=0;

    printf("Par | Impar\n\n");

    while (contador <= 100) {

        printf("%d  | %d \n",contador,contador+1);
        contador=contador+2;
    }

    return 0;
}