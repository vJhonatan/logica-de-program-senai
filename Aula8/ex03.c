// Desenvolva um programa para um caixa de mercado que permita
// contabilizar 5 produtos, calcular o valor total da compra, entrar com o
// valor pago pelo comprador e informar o valor do troco que o comprador
// receberá.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int contador=0;
    float produto1, produto2, produto3, produto4, produto5, valorTotal, valorPago, troco;

    while(contador < 5){

        // valores dos produtos

        printf("\nInforme o valor do produto: ");
        scanf("%f",&produto1);

        printf("\nInforme o valor do produto: ");
        scanf("%f",&produto2);

        printf("\nInforme o valor do produto: ");
        scanf("%f",&produto3);

        printf("\nInforme o valor do produto: ");
        scanf("%f",&produto4);

        printf("\nInforme o valor do produto: ");
        scanf("%f",&produto5);

        system("cls");

        // total da compra

        valorTotal = produto1+produto2+produto3+produto4+produto5;

        printf("\nO valor total ficou: R$ %.2f \n\nInsira a quantia em dinheiro que deseja pagar: ",valorTotal);
        scanf("%f", &valorPago);

        system("cls");

        // troco

        troco = valorPago - valorTotal;

        printf("\nSeu troco ficou em: R$ %.2f \n\n", troco);

        contador++;
    }

    return 0;
}