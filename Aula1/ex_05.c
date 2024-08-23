#include <stdio.h>
#include <stdlib.h>

int main () {

    float grausC, grausF, conversao;

    printf("Entre com o valor em graus centigrados: ");
    scanf("%f",&grausC);

    grausF = (grausC * 1.8) + 32;

    printf("\nA conversao de graus centigrados para Fahrenheit fica: %.1f\n",grausF);

    return 0;

}