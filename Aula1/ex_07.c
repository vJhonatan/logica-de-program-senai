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
}e