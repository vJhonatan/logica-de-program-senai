// 1. Desenvolva um programa que conte e imprima os números de 1 a 50
// horizontalmente.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador=1;

    while(contador <= 50) {
        printf("%d ",contador);
        contador++;
    }

    return 0;
}