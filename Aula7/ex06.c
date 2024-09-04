// 6. Desenvolva um programa em C mostra todos os números ímpares de 1 até
// 100 caso o resultado seja maior que 10, apresentá-lo.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador = 0;

    while (contador <= 100) {
        if (contador%2 == 1 && contador > 10){
            printf("%d \n",contador);
        }
        contador++;
    }

    return 0;
}