/*escreva um algoritimo que mostra o menu a seguir e,
dada a escolha do usuário, le dois números, calcula e imprime
as informações adequadas. o programa deve encerrar somente quando o usuario selecionar opção 3
menu de opções:
    1 somar dois mumeros;
    2 multiplicar dois numeros;
    3 sair 
o que deseja fazer?*/

#include<stdio.h>

int main(void){
int a,b;
int opcao;
opcao=2;
    while (opcao!=3){//permanece se a opção for difernte de 3
    printf("opcoes do menu\n");//imprime o menu
    printf("1.somar dois numeros:\n");//opçao 1
    printf("2.multiplicar dois numeros:\n");//opçao 2
    printf("3.sair:\n");//opção 3
    printf("o que deseja fazer? ");// escolher a opçao
    scanf("%d", &opcao); //ler o inteiro e a opçao escolhida
        switch(opcao){
        case 1:
        printf("informe dois numeros: ");
        scanf("%d %d", &a, &b);// armazena oss numeros escolhidos
        printf("soma:%d\n", a+b);
        break;
        case 2:
        printf("informe dois numeros");
        scanf("%d %d", &a, &b);// armazena oss numeros escolhidos
        printf("multiplicacao:%d\n", a*b);
        break;
        case 3:
        printf("obrigado por utilizar o sistema\nSSS");
        break;
        default:
        printf("opcao invalida tente novamente\n");
       }
    }
return 0;
}

