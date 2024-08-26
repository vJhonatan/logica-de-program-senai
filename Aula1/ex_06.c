// Desenvolva um programa em C que calcule a quantidade de litros de combustível
// consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por
// litro de combustível.
// O programa deverá ler o tempo decorrido na viagem e a velocidade média e aplicar
// as fórmulas:

// D = T V
// L = D /12

// Em que:

// • D = Distância percorrida
// • T = Tempo decorrido em horas
// • V = Velocidade média
// • L = Litros de combustível consumidos Ao final, o programa deverá imprimir a

// distância percorrida e a quantidade de litros consumidos na viagem.

#include <stdio.h>
#include <stdlib.h>

int main () {

    float distanciaPercorrida, velocidadeMedia, tempoCorrida, litroCombustivel;

    printf("Entre com o tempo de viagem (em horas): ");
    scanf("%f",&tempoCorrida);

    printf("\nEntre com a velocidade media (em KM): ");
    scanf("%f",&velocidadeMedia);

    distanciaPercorrida = tempoCorrida * velocidadeMedia;
    litroCombustivel = distanciaPercorrida / 12;

    printf("\nFoi percorrido %.1f KM e foram gastos %.1f litros de combustivel.", distanciaPercorrida , litroCombustivel);

    return 0;
}