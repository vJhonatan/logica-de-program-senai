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
}e