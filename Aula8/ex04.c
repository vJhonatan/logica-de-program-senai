// Desenvolva um programa que crie o cadastro de clientes de uma loja, no
// cadastro terá as seguintes informações.

// Nome do Cliente
// Endereço,
// Telefone
// Cep
// Bairro
// Cidade
// Estado

// Quando o operador digitar o valor 2 continuar o sistema e fazer outro
// cadastro e quando digitado 0 o cadastro encerra.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int continuar=2;
    char nome[20] , endereco[40], tel[12], cep[10], bairro[15], cidade[15], estado[15];

    while(continuar == 2) {
        printf("--------- CADASTRO DE CLIENTES ---------\n\n");

        printf("Nome: ");
        scanf("%s",&nome);

        printf("Endereco: ");
        scanf("%s",&endereco);

        printf("Telefone: ");
        scanf("%s",&tel);

        printf("CEP: ");
        scanf("%s",&cep);

        printf("Bairro: ");
        scanf("%s",&bairro);

        printf("Cidade: ");
        scanf("%s",&cidade);

        printf("Estado: ");
        scanf("%s",&estado);

        system("cls");

        printf("--------- CADASTRO DE CLIENTES ---------\n\n");

        printf("Nome: %s \n", nome);
        printf("Endereco: %s \n", endereco);
        printf("Telefone: %s \n", tel);
        printf("CEP: %s \n", cep);
        printf("Bairro: %s \n", bairro);
        printf("Cidade: %s \n", cidade);
        printf("Estado: %s \n\n", estado);

        printf("Deseja realizar outro cadastro ou deseja encerrar o programa? (0. Encerrar  |  2. Novo Cadastro)\n ");
        scanf("%d",&continuar);

        if (continuar == 2) {
            system("cls");
        }
    }

    return  0;
}