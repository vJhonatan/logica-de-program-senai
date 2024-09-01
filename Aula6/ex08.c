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