#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if (num >= 100 && num <= 200) {
        printf("\n%d esta entre 100 e 200. \n",num);
    } else {
        printf("\n%d nao esta entre 100 e 200. \n",num);
    }

    return 0;
}