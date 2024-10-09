#include <stdio.h>
int multiplicacao(int n1, int n2){
return n1*n2;
}

int soma(int n1, int n2){
return n1+n2;
}

int subtracao(int n1, int n2){
return n1-n2;
}

int divisao(int n1, int n2){
return n1/n2;
}

int main(void){
int x, y;
int opcao;
int resultado ;
printf("digite 2 numeros:\n");
scanf("%d %d",&x, &y);
printf("Escolha uma opcao:\n");
printf("\t1 multiplicar\n:");
printf("\t2 somar\n:");
printf("\t3 subtrair\n:");
printf("\t4 dividir\n");
scanf("%d", &opcao);
    switch(opcao){
    case 1:
    resultado = multiplicacao(x,y);
    printf("O resultado da multiplicacao foi %d\n", resultado);
    break;
    case 2:
    resultado = soma(x,y);
    printf("a soma foi %d\n", resultado);
    break;
    case 3:
    resultado = subtracao(x,y);
    printf("a subtracao foi %d\n", resultado);
    break;
    case 4:
    resultado = divisao(x,y);
    printf("a divisao foi %d\n", resultado);
    }
return 0;
}