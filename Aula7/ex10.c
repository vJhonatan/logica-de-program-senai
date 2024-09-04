// 10. Desenvolva um programa que identifique números que são divisíveis por
// 5 e na contagem de 1 à 200, imprima na tela somente os números que
// não são divisíveis por 5.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador, multiplo;

    contador = 0;

    while (contador <= 200) {

        if(contador%5!=0){
            printf("%d \n",contador);
        }

        contador++;
    }

    return 0;
}