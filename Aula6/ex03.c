// Desenvolva um programa para uma papelaria com as seguintes informações.
// Informar que até 100 folhas a cópia custa R$ 0,25 e acima de 100 folhas a cópia
// custa R$ 0,20. Dado o total de cópias, informe o total a ser pago.
// #include <stdio.h>
// #include <stdlib.h>

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