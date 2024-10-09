//esse programa le o nome, endereço e o cpf de uma pessoa e armazena en string
#include <stdio.h>
#include <string.h>
#define TAM_NOME 50
#define TAM_END 100
#define TAM_CPF 15

int main(void){
char nome [TAM_NOME];
char endereco [TAM_END];
char cpf [TAM_CPF];

printf("informe seu nome:");
fgets(nome, TAM_NOME, stdin);
nome[strlen(nome) - 1] = '\0';
printf("Informe seu endereco: ");
fgets(endereco, TAM_END, stdin); 
endereco[strcspn(endereco, "\n")] = '\0'; // Remover o caractere de nova linha, se presente
printf("informe seu cpf:");
fgets(cpf, TAM_CPF, stdin);
printf("seus dados: \n");
printf("nome: %s\n Endereco: %s\n CPF: %s",nome, endereco, cpf);
return 0;
}