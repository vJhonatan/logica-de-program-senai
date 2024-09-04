// 7. Desenvolva um programa em C mostra todos os números pares de 1 até
// 100

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador = 0;

    while (contador <= 100) {
        if (contador%2 == 0){
            printf("%d \n",contador);
        }
        contador++;
    }

    return 0;
}