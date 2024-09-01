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