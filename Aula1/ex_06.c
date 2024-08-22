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
}e