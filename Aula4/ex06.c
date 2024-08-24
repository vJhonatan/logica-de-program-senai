// A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
// estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
// bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
// valor da prestação e informar se o empréstimo pode ou não ser concedido.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Entre com um numero: ");
    scanf("%d" , &num);

    if (num % 3 == 0) {
        printf("\nEh multiplo de 3\n");
    } else {
        printf("\nNao eh multiplo de 3\n");
    }

    return 0;
}