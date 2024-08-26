// Desenvolva um programa em C que calcule o valor de uma prestação em atraso.
// Para isso, o programa deve ler o valor da prestação vencida, a taxa periódica de
// juros e o período de atraso.
// Ao final, o programa deve imprimir o valor da prestação atrasada, o período de
// atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação
// acrescido dos juros. Considere juros simples.

#include <stdio.h>
#include <stdlib.h>

int main () {

    float valorPrestacao, tempoAtraso, taxaJuros, novoValorPrestacao, conversaoJuros ;

    printf("Qual o valor da prestacao vencida? ");
    scanf("%f" , &valorPrestacao);

    printf("\nPara cada dia de atraso eh cobrado 5 porcento em cima do valor. \n\nQuantos dias esta atrasado o pagamento? ");
    scanf("%f" , &tempoAtraso);

    taxaJuros = tempoAtraso * 5;
    conversaoJuros = (taxaJuros * valorPrestacao) / 100;
    novoValorPrestacao = valorPrestacao + conversaoJuros;

    printf("\n\nValor da Fatura: R$ %.2f \n\nDias de atraso: %.f dia(s) \n\nTaxa de Juros: %.f %% \n\nNovo Valor da Fatura: R$ %.2f \n\n", valorPrestacao, tempoAtraso, taxaJuros,novoValorPrestacao);

    return 0;
}