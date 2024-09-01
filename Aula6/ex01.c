#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Insira um numero: ");
    scanf("%d" , &num);

    if (num < 10) {
        printf("\n%d eh menor que 10.\n", num);
    } else if (num == 10) {
        printf("\n%d eh igual a 10.\n",num);
    } else {
        printf("\n%d eh maior que 10.\n", num);
    }

    return 0;
}