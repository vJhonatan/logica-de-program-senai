// Desenvolva um programa em C que leia a base e a altura de um retângulo e
// imprima o perímetro 2* (base + altura).

#include <stdio.h>
#include <stdio.h>

int main () {

    int base,altura,perimetro;

    printf("Insira a medida da base do retangulo: ");
    scanf("%d",&base);

    printf("Insira a medida da altura do retangulo: ");
    scanf("%d",&altura);

    perimetro = 2 * (base * altura);

    printf("\n\nO perimetro do retangulo eh: %d.\n" , perimetro);


    return 0;
}