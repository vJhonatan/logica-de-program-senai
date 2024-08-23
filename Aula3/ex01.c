/* Desenvolver um programa que permita ao operador de uma determinada farmácia registrar o nome do comprador e os itens comprados, valores unitários dos remédios
comprados, mostrar o valor total da compra. Contabilizar apenas 3 itens na compra. Criar um cupom fiscal.

Desenvolva um programa que registre o valor de 4 itens de um mercado, informando o nome do comprador, o valor unitário de cada item e o valor total de cada
item. Calcular e organizar em um cupom fiscal da seguinte forma:

------------------------------------------------------------
Nome do Comprador:

Descrição  |  Quantidade  |  valor unitário  |  valor total
___________________________________________________________

Analgésico        2               23.00           46.00

Creme_dental      1               10.00           10.00

Fluor             1               12.50           12.50

Soro              2               4.50             9.00
-------------------------------------------------------------
Valor Total da compra: 77.50

Valor Pago: 100.00
Troco: 22.50
Mensagem: Volte Sempre */

#include <stdio.h>
#include <stdlib.h>

int main () {

    char nome[15], item[50], item2[50], item3[50];
    float valorItem1, valorItem2, valorItem3, valorTotal;

    printf("Nome do Comprador: ");
    scanf("%s" , &nome);

    printf("\n\nItem Comprado: ");
    scanf("%s" , &item);
    printf("Valor dos Itens: ");
    scanf("%f" , &valorItem1);

    printf("\n\nItem Comprado: ");
    scanf("%s" , &item2);
    printf("Valor do Item: ");
    scanf("%f" , &valorItem2);

    printf("\n\nItem Comprado: ");
    scanf("%s" , &item3);
    printf("Valor do Item: ");
    scanf("%f" , &valorItem3);

    system("cls");

    valorTotal = valorItem1+valorItem2+valorItem3;

    printf("\n\n   --------%s---------", nome);
    printf("\n   _________________________ ");
    printf("\n  |   ITEM    |  VALOR     | ");
    printf("\n  |---------- |------------| ");
    printf("\n  |    %s   |   %.2f     | " , item, valorItem1);
    printf("\n  |    %s   |   %.2f     | " , item2, valorItem2);
    printf("\n  |    %s   |   %.2f     | " , item3, valorItem3);
    printf("\n  |------------------------| ");
    printf("\n  | VALOR TOTAL: R$ %.2f   | " , valorTotal);
    printf("\n  |________________________|\n");


    return 0;
}
