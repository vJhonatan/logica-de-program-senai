// 5. Desenvolva um programa que conte e imprima os múltiplos de 4 em até
// o número 500 iniciando em 0.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador = 0;

    while (contador <= 500) {
        if (contador%4 == 0){
            printf("%d \n",contador);
        }
        contador++;
    }

    return 0;
}