/*deseja-se criar uma agenda eletronica que armazena o nome
e o telefone de vários contatos
escrevaa um programa que lê n e contatos e
imprime suas informções em seguida*/

#include<stdio.h>
#define TAM 100

int main(void){
typedef struct T_contato{
    char nome[70];
    char fone[16];
}Contato;
Contato agenda[TAM];
int n;              //numero de elementos a serem cadastrados
int i;
printf("quantos contatos deseja cadastrar:");
scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("CONTADO %d\n", i+1);
        printf("informe o nome:");
        fflush(stdin);
        gets(agenda[i].nome);
        printf("informe o telefoe:");
        fflush(stdin);
        gets(agenda[i].fone);
        printf("\n");
    }
printf("esses sao seus contatos: \n");
    for(i=0; i<n; i++){
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n\n", agenda[i].fone);
    }
return 0;
}