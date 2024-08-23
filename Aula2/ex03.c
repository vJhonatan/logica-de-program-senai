// Desenvolva um programa que entre com o nome do usuário, Idade, telefone e endereço

#include <stdio.h>
#include <stdlib.h>

int main () {

    char nome[12], idade[3], telefone[15], endereco[30];

    printf("Informe seu nome: ");
    scanf("%s" , &nome);

    printf("Informe sua idade: ");
    scanf("%s" , &idade);

    printf("Informe seu telefone: ");
    scanf("%s" , &telefone);

    printf("Informe seu endereco: ");
    scanf("%s" , &endereco);

    system("cls");

    printf("\nNome: %s \n\nTelefone: %s \n", nome, telefone);

}