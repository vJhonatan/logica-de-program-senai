#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d",&num1);

    printf("Digite outro numero: ");
    scanf("%d",&num2);

    if(num1 > num2) {
        printf("\n%d \n",num1);
    } else {
        printf("\n%d \n",num2);
    }

    return 0;
}