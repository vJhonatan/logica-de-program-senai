// 3. Desenvolva um programa que faça contagem regressiva de 50 até 1
// horizontalmente.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador = 50;

    while(contador >= 1) {
        printf("%d ",contador);
        contador--;
    }

    return 0;
}