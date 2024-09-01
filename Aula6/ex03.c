#include <stdio.h>
#include <stdlib.h>

int main () {

    float quantidadeCopias;

    printf("     Ate 100 copias a unidade sai a R$ 0,25   |   Acima de 100 copias a unidade sai R$ 0,20 \n\n     Quantas copias deseja? ");
    scanf("%f",&quantidadeCopias);

    system("cls");

    if(quantidadeCopias <= 100) {
        printf("     Quantidade de copias: %.f \n\n     Valor a ser pago: R$ %.2f \n", quantidadeCopias, quantidadeCopias*0.25);
    } else {
        printf("     Quantidade de copias: %.f \n\n     Valor a ser pago: R$ %.2f \n", quantidadeCopias, quantidadeCopias*0.20);
    }

    return 0;
}