// Desenvolva um programa para auxiliar na produção de uma fábrica, uma
// máquina precisa de manutenção sempre o que o número de peças defeituosas
// supera 10% da produção. Dados o total de peças produzidas e o total de peças
// defeituosas, informe se a máquina precisa de manutenção.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int pecasProduzidas, pecasDefeituosas, percentual;

    printf("Informe quantas pecas foram produzidas: ");
    scanf("%d",&pecasProduzidas);

    printf("Informe quantas sairam com defeito: ");
    scanf("%d",&pecasDefeituosas);

    percentual = 0.1 * pecasProduzidas;

    if(pecasDefeituosas >= percentual) {
        printf("\nMaquina precisa de manuntencao. \n");
    } else {
        printf("\nMaquina nao precisa de manuntencao. \n");
    }

    return 0;
}