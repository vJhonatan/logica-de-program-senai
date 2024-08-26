// Um comerciante comprou um produto e quer vendê-lo com um lucro de 45%
// se o valor da compra for menor que R$20,00, caso contrário, o lucro será de
// 30%. Faça um programa em C que leia o valor do produto e imprima o valor
// da venda.

#include <stdio.h>
#include <stdlib.h>

int main () {

    float valorProduto, lucro1, lucro2;

    printf("Informe o valor do produto: ");
    scanf("%f" , &valorProduto);

    lucro1 = valorProduto + (valorProduto*0.45);
    lucro2 = valorProduto + (valorProduto*0.3);

    if (valorProduto < 20) {
        printf("\nR$ %.2f\n", lucro1);
    } else {
        printf("\nR$ %.2f\n", lucro2);
    }

    return 0;
}