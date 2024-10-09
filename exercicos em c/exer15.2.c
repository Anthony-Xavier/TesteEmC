/*escreva um algoritimo que mostra o menu a seguir e,
dada a escolha do usuário, le dois números, calcula e imprime
as informações adequadas. o programa deve encerrar somente quando o usuario selecionar opção 3
menu de opções:
    1 somar dois mumeros;
    2 multiplicar dois numeros;
    3 sair 
o que deseja fazer?*/

#include <stdio.h>

int main(void){
int a, b;
int opcao = 2;
    while(opcao!=3){
    printf("Opcoes do menu\n");
    printf("1.soma dois numeros: \n");
    printf("2.multiplica dois numeros: \n");
    printf("2.sair: \n");
    printf("o que deseja fazer:");
    scanf("%d", &opcao);
        switch(opcao){
            case 1:
            printf("informe dois numeros: ");
            scanf("%d %d", &a, &b);
            printf("soma: %d\n", a+b);
                if(a+b%2==2){
                printf("este numero eh par\n");
                 }
                else{
                printf("este numero eh impar\n");
                }
            break;
            case 2:
            printf("informe dois numeros: ");
            scanf("%d %d", &a, &b);
            printf("multiplicacao%d\n", a*b);
                if(a*b%2==0){
                printf("este numero eh par\n");
                }
                else{
                printf("este numero eh impar\n");
                }
            break;
            case 3:
            printf("obrigado por utilizar o sistema");
            break;
            default:
            printf("opcao invalida tente novamente\n");
            
        }
    }
return 0;
}