// Desenvolva um programa em C que efetue a apresentação do valor da conversão
// em real (R$) de um valor lido em dólar (US$).
// Para isso, será necessário também ler o valor da cotação do dólar.

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