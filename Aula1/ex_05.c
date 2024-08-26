// Desenvolva um programa em C que calcule a conversão entre graus centígrados
// e Fahrenheit. Para isso, leia o valor em centígrados e calcule com base na fórmula
// a seguir.

// Após calcular o programa deve imprimir o resultado da
// conversão. F = 9 C +160 /5 Em que:

// • F = Graus em Fahrenheit
// • C = Graus centígrados

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