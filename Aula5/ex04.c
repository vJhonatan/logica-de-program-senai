// Faça um programa que permita entrar com o salário de uma pessoa e imprima
// o desconto do INSS segundo a tabela seguir:


// Salario                                                   Faixa de Desconto

// Menor ou igual a R$ 500,00                                     Isento
// Maior que R$ 600,00 e menor ou igual a R$ 1.200,00               20%
// Maior que R$ 1.200,00 e menor ou igual a R$ 2.000,00             25%
// Maior que R$ 2.000,00                                            30%


#include <stdio.h>
#include <stdlib.h>

int main () {

    float salario;

    printf("Informe o seu salario: ");
    scanf("%f" , &salario);

    if (salario <= 600) {
        printf("\nIsento.\n");
    } else if (salario > 600 && salario <= 1200){
        printf("\n20%%\n");
    } else if (salario > 1200 && salario <= 2000) {
        printf("\n25%%\n");
    } else {
        printf("\n30%%\n");
    }

    return 0;
}