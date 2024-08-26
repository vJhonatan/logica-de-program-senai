// Desenvolva um programa em C que leia o valor de um produto, o percentual do
// desconto desejado e imprima o valor do desconto e o valor do produto subtraindo
// o desconto.

#include <stdio.h>
#include <stdio.h>

int main() {

    float valor, desconto, porcentagem, valorDesconto, sub;

    printf("Insira o valor do produto: ");
    scanf("%f",&valor);

    printf("Insira quantos porcento deseja de desconto: ");
    scanf("%f",&desconto);

    porcentagem = desconto / 100;
    valorDesconto = valor * porcentagem;
    sub = valor - valorDesconto;

    printf("\n\nVoce tera %.2f reais de desconto e o valor total ficara: %.2f - %.2f = %.2f reais.\n",valorDesconto, valor, valorDesconto, sub);

    return 0;
}