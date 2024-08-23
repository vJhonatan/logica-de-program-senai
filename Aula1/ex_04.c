#include <stdio.h>
#include <stdio.h>

int main() {

    float salarioAtual, percentualReajuste, porcentagem, valorReajuste, novoSalario;

    printf("Insira o seu salario atual: ");
    scanf("%f",&salarioAtual);

    printf("Insira quantos porcento sera de reajuste: ");
    scanf("%f",&percentualReajuste);

    porcentagem = percentualReajuste / 100;
    valorReajuste = salarioAtual * porcentagem;
    novoSalario = salarioAtual + valorReajuste;

    printf("\n\nVoce tera %.2f reais de reajuste e o seu novo salario sera de: %.2f + %.2f = %.2f reais.\n",valorReajuste, salarioAtual, valorReajuste, novoSalario);

    return 0;
}