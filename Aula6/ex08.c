// Desenvolva um programa que informe a idade de um nadador em uma
// competição e informe:
// Idade até 10 anos – Infantil.
// Idade de 11 a 17 anos - Categoria Infanto-Juvenil.
// Acima de 17 anos - Categoria Juvenil.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int idade;

    printf("Informe a idade do nadador: ");
    scanf("%d",&idade);

    if (idade <= 10) {
        printf("\nCategoria Infantil \n");
    } else if (idade >= 11 && idade <= 17){
        printf("\nCategoria Infanto Juvenil \n");
    } else {
        printf("\nCategoria Juvenil \n");
    }

    return 0;
}