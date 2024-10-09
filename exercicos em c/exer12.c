/*este programa le um inteiro positivo n e em seguida
imprima os inteiros de 1 ate n
*/
#include <stdio.h>

int main(void){
int n, i;
printf("informe o numero: ");
scanf("%d", &n);// Lê o número inteiro informado pelo usuário e armazena em n
    for(i=1; i<=n; i++){//for de i de 1 ate n
    printf("%d ", i);// Imprime o valor de i seguido de um espaço
    }
return 0;
}