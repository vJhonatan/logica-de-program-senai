#include <stdio.h>
#include <stdlib.h>

int main () {

    float cotacaoDolar, conversao, valorDolar;

    printf("Digite a quantia desejada em dolar para converter para real: ");
    scanf("%f" , &valorDolar);

    cotacaoDolar = 4.98;
    conversao = cotacaoDolar * valorDolar;

    printf("\n\nR$ %.2f \n\n" , conversao);

    return 0;
}